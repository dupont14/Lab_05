#!/bin/bash



echo "starting build"
config-pin p8.16 gpio_pu
config-pin p9.12 gpio
g++ -Wall myGPIO.cpp myGPIOApp.cpp -o myGPIO
echo "build finished"
