#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
#include <fstream>
#include "myGPIO.h"
#define GPIOPATH "/sys/class/gpio/gpio"

using namespace std;

//initialize data members

MYGPIO::MYGPIO(int num)
{
	number = num;
	stringstream ss;
	ss  << GPIOPATH << number << "/"; //ready to recieve path val such as value direction etc
	path = ss.str();
}

//getters-------------------------------------------------------------------------------------------
int MYGPIO::getNumber()
{
return number;
}

void  MYGPIO::write(string filename, int value)
{
	stringstream ss;
	fstream fs;
	ss << path << "/" << filename;
	fs.open(ss.str().c_str(), fstream::out);//open file for output string
	fs << value;
}

void  MYGPIO::write(string filename, string value)
{
        stringstream ss;
        fstream fs;
        ss << path << filename;
        fs.open(ss.str().c_str(), fstream::out);//open file for output string
        fs << value;
}


string MYGPIO::read(string filename)
{
  string value;
  fstream fs;
  stringstream ss;
  ss << path << filename;
  fs.open(ss.str().c_str(), fstream::in);
  fs >> value;
  return value;
}

void MYGPIO::setDirection(string dir)//out or in
{
	write("/direction", dir);

}

void MYGPIO::setValue(int value)
{
	write("/value", value);
}

int MYGPIO::getValue()
{
 string val = read("/value");
 int value = stoi(val);
 return value;
}


string MYGPIO::getDirection()
{
 string direction = read("direction"); 
 return direction;  
}


void MYGPIO::toggleOutput()
{
  int currentVal = getValue();
  if(currentVal == 1)
  {
  setValue(0);
  }
  else
  {
  setValue(1);
  }
}


void MYGPIO::toggleOutputNumberOfTimes(int n, int delay)
{
  for(int i = 0; i < n ; i++)
  {
  toggleOutput();
  sleep(delay);
  }
}

MYGPIO::~MYGPIO()
{

}
