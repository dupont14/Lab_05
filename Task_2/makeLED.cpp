#include<iostream>
#include<fstream>
#include<string>
#include<unistd.h>
using namespace std;

#define LEDPATH "/sys/class/gpio/gpio60"



void writeLED(string filename, string value){
   fstream fs;
   string path(LEDPATH);
   fs.open((path + filename).c_str(), fstream::out);
   fs << value;
   fs.close();
}


int main()
{
for (int i = 0; i < 3; i++)
{
	std::cout << "writing 1 to LED"  << std::endl;
	writeLED("/value", "1");
	sleep(1);
	std::cout << "writing 0 to LED"  << std::endl;
	writeLED("/value", "0");
	sleep(1);
}

}
