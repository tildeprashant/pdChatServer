################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ChatServer.cpp \
../src/ClientListener.cpp \
../src/ClientSender.cpp \
../src/ServerDispatcher.cpp 

OBJS += \
./src/ChatServer.o \
./src/ClientListener.o \
./src/ClientSender.o \
./src/ServerDispatcher.o 

CPP_DEPS += \
./src/ChatServer.d \
./src/ClientListener.d \
./src/ClientSender.d \
./src/ServerDispatcher.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


