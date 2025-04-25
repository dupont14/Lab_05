#include<iostream>
#include<fstream>
#include<string>
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
std::cout << "writing 0 to LED"  << std::endl;
writeLED("/value", "0");
}
