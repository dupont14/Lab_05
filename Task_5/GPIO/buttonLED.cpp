
#include "GPIO.h"
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<cstdio>
#include<fcntl.h>
#include<unistd.h>
#include<sys/epoll.h>
#include<pthread.h>
using namespace std;
using namespace exploringBB;

int main()
{
 GPIO button(46);
 GPIO LED(60);
 GPIO_VALUE buttonValue;

	while(1)
	{
	buttonValue = button.getValue();
	if(buttonValue == HIGH)
		{
			LED.setValue(LOW);
		}
	else if(buttonValue == LOW)
		{
			LED.setValue(HIGH);
		}
	}

}
