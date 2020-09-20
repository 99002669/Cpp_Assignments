#include <iostream>
#include<math.h>
#include<algorithm>
#include "FractionFinal.h"
using namespace std;
Fraction::Fraction() :
    m_numerator(0), m_denominator(0) {
}
Fraction::Fraction(int x, int y) :
    m_numerator(x), m_denominator(y) {
}
Fraction::Fraction(int x) {
    int res=x+(m_numerator/m_denominator);
    cout << "The final answer is "<< res;
}
Fraction Fraction::operator+(const Fraction &ref) {
    int num,den;
    if(m_denominator==ref.m_denominator) {
        num=m_numerator + ref.m_numerator;
        den=ref.m_denominator;
    } else {
        num=(m_numerator*ref.m_denominator)+(m_denominator*ref.m_numerator);
        den=(m_denominator*ref.m_denominator);
    }
    cout << "Numerator is " << num <<"," << "Drnominator is "<< den;
}
Fraction Fraction::operator-(const Fraction &ref) {
    int num,den;
    if(m_denominator==ref.m_denominator) {
        num=m_numerator + ref.m_numerator;
        den=ref.m_denominator;
    } else {
        num=(m_numerator*ref.m_denominator)+(m_denominator*ref.m_numerator);
        den=(m_denominator*ref.m_denominator);
    }
    cout <<"Numerator is " << num <<"," << "Drnominator is "<< den;
}
Fraction Fraction::operator*() {
    int num=m_numerator * m_denominator; ;
    cout << "Multiplication of numerator and denominator is " << num ;
}
Fraction Fraction::operator+(int x) {
    int num=x+(m_numerator / m_denominator);
    cout << "Addition is " << num;
}
Fraction Fraction::operator-(int x) {
    int num=x-(m_numerator / m_denominator);
    cout << "Subtraction is " << num;
}
bool Fraction::operator==(const Fraction &ref) {
    return m_numerator==ref.m_numerator && m_denominator==ref.m_denominator;
}
bool Fraction::operator<(const Fraction &ref) {
    float num1=float(m_numerator/m_denominator);
    float num2=float(ref.m_numerator/ref.m_denominator);
    if(num1<num2)
        return true;
    else
        return false;
}
bool Fraction::operator>(const Fraction &ref) {
    float num1=float(m_numerator/m_denominator);
    float num2=float(ref.m_numerator/ref.m_denominator);
    if(num1>num2)
        return true;
    else
        return false;
}
void Fraction::simplify(int x, int y) {
    int g;
    if (x == 0)
        cout<<x<<endl;;
    if (y == 0)
        cout<<"Invalid Denominator"<<endl;

    // base case
    if (x == y)
        cout<<x<<endl;;

    // a is greater
    if (x > y)
        g=__gcd(x-y, y);
    g=__gcd(x, y-x);

    if(g==1) {
        cout<<"Simplified form is : "<<x<<"/"<<y<<endl;
    } else {
        cout<<"Simplified form is : "<<x/g<<"/"<<y/g<<endl;
    }
}
void Fraction::isSimplest(int x, int y) {
    int g;
    if (x == 0)
        cout<<x<<endl;;
    if (y == 0)
        cout<<"Invalid Denominator"<<endl;
    if (x == y)
        cout<<x<<endl;;
    if (x > y)
        g=__gcd(x-y, y);
    g=__gcd(x, y-x);

    if(g==1) {
        cout<<"Fraction Is Simplest"<<endl;
    } else {
        cout<<"Fraction Is  Not Simplest"<<endl;
    }
}
void Fraction::display(int x, int y) {
    cout << x << y;
}
int main() {
    Fraction f;
    f.isSimplest(1,3);
    return 0;
}
