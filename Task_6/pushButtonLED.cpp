#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define LEDPATH "/sys/class/gpio/gpio60"
#define BUTTONPATH "/sys/class/gpio/gpio46/value"


void writeLED(string filename, string value){
   fstream fs;
   string path(LEDPATH);
   fs.open((path + filename).c_str(), fstream::out);
   fs << value;
   fs.close();
}

char readButton()
{
  char buttonVal;
  fstream fs;
  fs.open(BUTTONPATH.c_str(), fstream::in);
  buttonVal << fs;
  return buttonVal;
}

int main()
{

while(1)
{

char value = readButton();
if(value == "1")
{
writeLED("/value", "0");
}
else
{
writeLED("/value", "0");
}

}
}
