#include <iostream>
#include <string.h>
using namespace std;
enum IPClass {a,b,c,d};
int i[4];
//char *token;

class IPAddress {
  private:
    std::string ipval;

  public:
    IPAddress();
    IPAddress(int,int,int,int);
    IPAddress(int);
    bool isLoopBack(std::string);
    void getIPClass(std::string,IPClass);
    void display();
};
