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

string readButton()
{
  string buttonVal;
  fstream fs;
  string path(BUTTONPATH);
  fs.open((path).c_str(), fstream::in);
  fs >> buttonVal;
  return buttonVal;
}

int main()
{


while(1){
string valueButton = readButton();
std::cout << valueButton << endl;

if(valueButton == "1")
{
writeLED("/value","0");
}
else
{
writeLED("/value","1");

}
}


}
