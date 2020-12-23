/**
 *
 * @file Conversion_NumberFloat2String.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 10 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Standard/Standard.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberExponential2String.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberFloat2String.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberLong2String.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_NumberFormat.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Inversion.h>


/*
CONV_nSTATUS Conv__enNumber2String_Float(CONV_OUT_TypeDef pvfOut, char* pcBufferOut, float64_t dValue, uint32_t u32Index, uint32_t u32MaxLenght, uint32_t* pu32BufOutLenght,  uint32_t u32Width, uint32_t u32flags,  uint32_t u32Prec)
{
  char pvBufferIn[CONV_enBUFFER_SIZE_FLOAT];
  size_t len  = 0U;
  float64_t diff = 0.0;

  // powers of 10
  static const float64_t pow10[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };

  // test for special values
  if (dValue != dValue)
      return Conv__enOutInversion(pvfOut, pcBufferOut, "nan", u32Index, u32MaxLenght, 3, pu32BufOutLenght, u32Width, u32flags);
  if (dValue < -DBL_MAX)
      return Conv__enOutInversion(pvfOut, pcBufferOut, "fni-", u32Index, u32MaxLenght, 4, pu32BufOutLenght, u32Width, u32flags);
  if (dValue > DBL_MAX)
      return Conv__enOutInversion(pvfOut, pcBufferOut, (u32flags & (uint32_t) CONV_enFLAGS_PLUS) ? "fni+" : "fni", u32Index, u32MaxLenght, (u32flags & (uint32_t) CONV_enFLAGS_PLUS) ? 4U : 3U, pu32BufOutLenght, u32Width, u32flags);

  // test for very large values
  // standard printf behavior is to print EVERY whole number digit -- which could be 100s of characters overflowing your buffers == bad
  if ((dValue > CONV_MAX_VALUE_FLOAT) || (dValue < -CONV_MAX_VALUE_FLOAT)) {
#if defined(PRINTF_SUPPORT_EXPONENTIAL)
    return _etoa(pvfOut, pcBufferOut, u32Index, u32MaxLenght, dValue, u32Prec, u32Width, u32flags);
#else
    return 0U;
#endif
  }

  // test for negative
  bool negative = false;
  if (dValue < 0) {
    negative = true;
    dValue = 0 - dValue;
  }

  // set default precision, if not set explicitly
  if (!(u32flags & (uint32_t) CONV_enFLAGS_PRECISION)) {
    u32Prec = CONV_DEFAULT_FLOAT_PRECISION;
  }
  // limit precision to 9, cause a u32Prec >= 10 can lead to overflow errors
  while ((len < CONV_enBUFFER_SIZE_FLOAT) && (u32Prec > 9U)) {
    pvBufferIn[len++] = '0';
    u32Prec--;
  }

  int whole = (int)dValue;
  float64_t tmp = (dValue - whole) * pow10[u32Prec];
  unsigned long frac = (unsigned long)tmp;
  diff = tmp - frac;

  if (diff > 0.5) {
    ++frac;
    // handle rollover, e.g. case 0.99 with u32Prec 1 is 1.0
    if (frac >= pow10[u32Prec]) {
      frac = 0;
      ++whole;
    }
  }
  else if (diff < 0.5) {
  }
  else if ((frac == 0U) || (frac & 1U)) {
    // if halfway, round up if odd OR if last digit is 0
    ++frac;
  }

  if (u32Prec == 0U) {
    diff = dValue - (float64_t)whole;
    if ((!(diff < 0.5) || (diff > 0.5)) && (whole & 1)) {
      // exactly 0.5 and ODD, then round up
      // 1.5 -> 2, but 2.5 -> 2
      ++whole;
    }
  }
  else {
    unsigned int count = u32Prec;
    // now do fractional part, as an unsigned number
    while (len < CONV_enBUFFER_SIZE_FLOAT) {
      --count;
      pvBufferIn[len++] = (char)(48U + (frac % 10U));
      if (!(frac /= 10U)) {
        break;
      }
    }
    // add extra 0s
    while ((len < CONV_enBUFFER_SIZE_FLOAT) && (count-- > 0U)) {
      pvBufferIn[len++] = '0';
    }
    if (len < CONV_enBUFFER_SIZE_FLOAT) {
      // add decimal
      pvBufferIn[len++] = '.';
    }
  }

  // do whole part, number is reversed
  while (len < CONV_enBUFFER_SIZE_FLOAT) {
    pvBufferIn[len++] = (char)(48 + (whole % 10));
    if (!(whole /= 10)) {
      break;
    }
  }

  // pad leading zeros
  if (!(u32flags & (uint32_t) CONV_enFLAGS_LEFT) && (u32flags & (uint32_t) CONV_enFLAGS_ZEROPAD)) {
    if (u32Width && (negative || (u32flags & ((uint32_t) CONV_enFLAGS_PLUS | (uint32_t) CONV_enFLAGS_SPACE)))) {
      u32Width--;
    }
    while ((len < u32Width) && (len < CONV_enBUFFER_SIZE_FLOAT)) {
      pvBufferIn[len++] = '0';
    }
  }

  if (len < CONV_enBUFFER_SIZE_FLOAT) {
    if (negative) {
      pvBufferIn[len++] = '-';
    }
    else if (u32flags & (uint32_t) CONV_enFLAGS_PLUS) {
      pvBufferIn[len++] = '+';  // ignore the space if the '+' exists
    }
    else if (u32flags & (uint32_t) CONV_enFLAGS_SPACE) {
      pvBufferIn[len++] = ' ';
    }
  }
  return Conv__enOutInversion(pvfOut, pcBufferOut, pvBufferIn, u32Index, u32MaxLenght, len, pu32BufOutLenght, u32Width, u32flags);
}
*/
