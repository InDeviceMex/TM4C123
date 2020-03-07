################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Driver_Source/%.obj: ../Driver_Source/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="/home/vyldram/Git/TM4C123/TM4C123_HelloWorld" --include_path="/home/vyldram/Git/TM4C123/TM4C123_HelloWorld/Driver_Header" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Driver_Source/$(basename $(<F)).d_raw" --obj_directory="Driver_Source" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


