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
	MYGPIO Button(112);
	LED.setDirection("out");
	Button.setDirection("in");
	
	LED.setValue(1);
	cout <<"the LED value is:"<< LED.getValue() << endl;
	sleep(3);
	LED.setValue(0);
	cout << "the LED value is:"<<LED.getValue() << endl;

	cout <<"the Buttom value is:"<< Button.getValue()<< endl;

	
}
