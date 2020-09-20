#include<iostream>
#include "CurrencyFinal.h"
using namespace std;
Currency::Currency():
    m_rupees(0),m_paise(0) {}
Currency::Currency(int rupees, int paise) : m_rupees(rupees), m_paise(paise) {}
Currency::Currency(int rupees) : m_rupees(rupees) {}
Currency Currency::operator+(const Currency &ref) {
    int paise = m_paise + ref.m_paise;
    int rupees = m_rupees + ref.m_rupees;
    return Currency(rupees,paise);
}
Currency Currency::operator-(const Currency &ref) {
    int paise = m_paise - ref.m_paise;
    int rupees = m_rupees - ref.m_rupees;
    return Currency(rupees,paise);
}
Currency Currency::operator+(int n_paise) {
    int paise = m_paise + n_paise;
    int rupees = m_rupees;
    return Currency(rupees,paise);
}
Currency Currency::operator-(int n_paise) {
    int paise = m_paise - n_paise;
    int rupees = m_rupees;
    return Currency(rupees,paise);
}
Currency Currency:: operator++() {
    ++m_paise; // TODO: mm > 60
    cout<<m_paise<<endl;
}
Currency Currency:: operator++(int temp) {
    for(int i=0; i<temp; i++) {
        ++m_paise;
    }
    cout<<m_paise<<endl;
}
bool Currency:: operator==(const Currency &ref) {
    return m_rupees == ref.m_rupees && m_paise == ref.m_paise;
}
bool Currency::operator< (const Currency &ref) {
    if(m_rupees<ref.m_rupees) {
        cout<<"Rupees is less than referral Rupees.\n";
    } else if (m_paise<ref.m_paise) {
        cout<<"Paise is less than referral Paise.\n";
    }
}
bool Currency::operator> (const Currency &ref) {
    if(m_rupees>ref.m_rupees) {
        cout<<"Rupees is Greater than referral Rupees.\n";
    } else if (m_paise>ref.m_paise) {
        cout<<"Paise is Greater than referral Paise.\n";
    }
}
void Currency:: display() {
    std::cout << m_rupees << ":" << m_paise << "\n";
}
int main() {
    return 0;
}
