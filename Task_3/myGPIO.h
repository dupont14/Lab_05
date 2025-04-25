#include <string>
#include <fstream>


using namespace std;

class MYGPIO {

 private:
 int number;
 string  path;
 void write(string filename, string value);
 void write(string filename, int value);
 string read(string filename);
 ofstream stream;


 public:
 MYGPIO(int number); //constructor
 int getNumber();
 void setDirection(string dir);
 string getDirection();
 void setValue(int val);
 int getValue();
 void toggleOutput();
 void toggleOutputNumberOfTimes(int n, int delay);

 ~MYGPIO(); //destructor

};

