#include<iostream>
#include<string.h>
#include "IpAddressFinal.h"
IPAddress::IPAddress() :
    ipval("127.0.0.0") {
}
IPAddress::IPAddress(int number1,int number2, int number3, int number4 ) :
    ipval(to_string(number1)+"."+to_string(number2)+"."+to_string(number3)+"."+to_string(number4)) {
}
IPAddress::IPAddress(int number) :
    ipval(to_string(number)) {
}
bool IPAddress::isLoopBack(std::string string1) {
    if (string1=="127.0.0.1") {
        std::cout<<"true"<<endl;
    } else {
        std::cout<<"false"<<endl;
    }
}
void IPAddress::getIPClass(std::string s, IPClass) {
    string temp;
    int i=0;
    while (s[i]!='.') {
        temp[i]=temp[i]+s[i];
        i=i+1;
    }
    int icheck=stoi(temp);
    if(icheck>0 && icheck<127) {
        std::cout<<"IPClass: a "<<IPClass::a;
    }
    if(icheck>127 && icheck<191) {
        std::cout<<"IPClass: b "<<IPClass::b;
    }
    if(icheck>191 && icheck<223) {
        std::cout<<"IPClass: c "<<IPClass::c;
    }
    if(icheck>223 && icheck<240) {
        std::cout<<"IPClass: d "<<IPClass::d;
    }
}
void IPAddress::display() {
    std::cout <<"Your IP Address is:"<<ipval;
}
int main() {
    return 0;
}
