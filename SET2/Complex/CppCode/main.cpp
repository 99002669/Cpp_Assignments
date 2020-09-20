#include<iostream>
#include "ComplexFinal.h"
Complex::Complex() :
    m_real(0), m_imag(0) {
}
Complex::Complex(int real, int imaginary) :
    m_real(real), m_imag(imaginary) {
}
Complex::Complex(int real):
    m_real(real) {
}
Complex Complex::operator+() {
    return(+m_real, m_imag);
}
Complex Complex::operator-() {
    return(-m_real, -m_imag);
}
Complex Complex::operator*() {
    int real = (m_real*m_real) - (m_real*m_imag);
    int imaginary = (2*m_real*m_imag);
    return(real, imaginary);
}
Complex Complex::operator++() {
    ++m_real;
    return(m_real);
}
Complex Complex::operator++(int rea1) {
    for (int i=0; i<rea1; i++) {
        ++m_real;
    }
    return(m_real);
}
bool Complex::operator==(const Complex &ref) {
    if((ref.m_real==m_real)&&(ref.m_imag==m_imag)) {
        return 1;
    } else {
        return 0;
    }
}
void Complex::display() {
    cout<<m_real<<endl;
    cout<<m_imag<<endl;
}
int main() {
    return 0;
}
