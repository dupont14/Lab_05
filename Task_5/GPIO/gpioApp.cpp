
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
	GPIO LED(60);
	LED.setDirection(OUTPUT);
	for(int i = 0; i < 3 ; i++)
	{
		LED.setValue(HIGH);
		sleep(1);
		LED.setValue(LOW);
		sleep(1);
	}
}


