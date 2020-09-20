#include <iostream>
#include "BoxFinal.h"
using namespace std;
Box::Box() :
    m_length(0), m_breadth(0), m_height(0) {
}
Box::Box(int length, int breadth, int height) :
    m_length(length),m_breadth(breadth), m_height(height) {
}
Box::Box(int length) :
    m_length(length) {
}
Box::Box(const Box& ref) :
    m_length(ref.m_length),m_breadth(ref.m_breadth), m_height(ref.m_height) {
}
void Box::length(int length) {
    m_length=length;
    std::cout<<"Length is: "<<m_length<<endl;
}
void Box::breadth(int breadth) {
    m_breadth=breadth;
    std::cout<<"Breadth is: "<<m_breadth<<endl;
}
void Box::height(int height) {
    m_height=height;
    std::cout<<"height is: "<<m_height<<endl;
}
void volume(int length, int breadth, int height) {
    int vol=length*breadth*height;
    std::cout<<"Volume is: "<<vol<<endl;
}
void Box::display() {
    std::cout << m_length << "," << m_breadth << ","<< m_height<<"\n";
}
int main() {
    return 0;
}
