
#include "adc.h"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
	AnalogIn tempSense(0);
	
	cout << "the value is " << tempSense.readAdcSample() << endl;
}
