/**
 *
 * @file HashTable_String.c
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
 * @verbatim 19 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/HashTable/xHeader/HashTable_String.h>

uint32_t HashTable_StringFunction(const void *pvKey)
{
    const char *pcCharacter = (const char*)pvKey;
    uint32_t u32Value = 0UL;
    uint32_t u32Temp = 0UL;
    uint32_t u32TempShift = 0UL;
    uint8_t u8Temp = 0UL;

    while ('\0' != *pcCharacter)
    {
        u32Value <<= 4UL;
        u8Temp = (uint8_t) (*pcCharacter);
        u32Value += (uint32_t) u8Temp;
        u32Temp = u32Value & 0xf0000000UL;
        if (0UL != u32Temp)
        {
            u32TempShift = (u32Temp >> 24);
            u32Value ^= u32TempShift;
            u32Value ^= u32Temp;
        }
        pcCharacter += 1UL;
    }
    return u32Value;
}
