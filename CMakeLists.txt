cmake_minimum_required(VERSION 3.2)
project(basic_arduino_experiments)

SET(ARM_TOOL_CHAIN /home/rhuanca/dev/rpi/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64)
SET(CMAKE_SYSTEM_NAME Linux)

set(CMAKE_C_COMPILER ${ARM_TOOL_CHAIN}/bin/arm-linux-gnueabihf-gcc)

set(SOURCE_FILES main.c)

add_executable(read_gpio_4 ${SOURCE_FILES} rpi.h rpi.c main.c)