################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Archer.cpp \
../src/Arena.cpp \
../src/Cleric.cpp \
../src/Factory.cpp \
../src/Fighter.cpp \
../src/Robot.cpp 

OBJS += \
./src/Archer.o \
./src/Arena.o \
./src/Cleric.o \
./src/Factory.o \
./src/Fighter.o \
./src/Robot.o 

CPP_DEPS += \
./src/Archer.d \
./src/Arena.d \
./src/Cleric.d \
./src/Factory.d \
./src/Fighter.d \
./src/Robot.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


