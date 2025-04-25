#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
#include <fstream>
#include "myGPIO.h"
#define GPIOPATH "/sys/class/gpio/gpio"


int main()
{
	
	MYGPIO LED(60);
	
	LED.setDirection("out");
	

	LED.toggleOutputNumberOfTimes(6,1);

	
}
