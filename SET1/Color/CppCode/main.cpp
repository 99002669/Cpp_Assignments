#include<iostream>
#include "ColorFinal.h"
Color::Color() :
    m_r(0), m_g(0), m_b(0) {
}
Color::Color(int red, int green, int blue) :
    m_r(red), m_g(green), m_b(blue) {
}
Color::Color(string color) {
    cout<<"Enter the desired color: ";
    cin>>color;
    cout<<color<<endl;
}
Color::Color(color_t x) {
    switch(x) {
    case red:
        cout<<"Red";
        break;
    case blue:
        cout<<"Blue";
        break;
    case green:
        cout<<"Green";
        break;
    case yellow:
        cout<<"Yellow";
        break;
    case black:
        cout<<"Black";
        break;
    default:
        cout<<"Undefined Color";
        break;
    }
}
void Color::invert() {
    int neg = 0xFFFFFF - m_r*m_g*m_b;
    neg = (0xFFFFFF - m_r*m_g*m_b) | 0xFF000000;
    cout<<"The Color has been inverted "<<endl;
    cout<<neg;
}
void Color::display() {
    cout<<"The Color composition is as follows: "<<endl;
    std::cout << "Red: "<<m_r << ", Green: " << m_g << ",Blue: " << m_b <<endl;
}
int main() {
    return 0;
}
