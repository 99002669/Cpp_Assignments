#include<iostream>
#include "Image.h"
Image::Image() :
    m_x(0), m_y(0), m_width(0), m_height(0) {
}
Image::Image(int x, int y, int w, int h) :
    m_x(x), m_y(y), m_width(w), m_height(h) {
}
Image::Image(const Image& ref) :
    m_x(ref.m_x), m_y(ref.m_y),m_width(ref.m_width), m_height(ref.m_height) {
}
void Image::move(int Quadrant, int position1, int position2) {
    if(Quadrant==1) {
        m_x=position1;
        m_y=position2;
        std::cout<< "Image has been moved to first quadrant and now the position is" << m_x <<","<< m_y ;
    } else if(Quadrant==2) {
        m_x=position1;
        m_y=position2;
        std::cout<< "Image has been moved to second quadrant and now the position is" << m_x<<"," << m_y ;
    }
    if(Quadrant==3) {
        m_x=position1;
        m_y=position2;
        std::cout<< "Image has been moved to third quadrant and now the position is" << m_x <<"," << m_y ;
    }
    if(Quadrant==4) {
        m_x=position1;
        m_y=position2;
        std::cout<< "Image has been moved to forth quadrant and now the position is" << m_x<< "," << m_y ;
    }
}
void Image::scale(int w, int h) {
    std::cout << w << h;
}
int Image::resize(int number1, int number2) {
    m_x=m_x+number1;
    m_y=m_y+number2;
    std::cout<< m_x <<"," << m_y;
}
void Image::display() {
    std::cout << m_x << "," << m_y << "," << m_width << ","<< m_height<<"\n";
}
int main() {
    return 0;
}

