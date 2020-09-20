#include<iostream>
#include "account.h"
Account::Account() :
    m_accNumber(0), m_accName(""), m_balance(0) {

}
Account::Account(int id, std::string name, double bal) :
    m_accNumber(id), m_accName(name), m_balance(bal) {
}
Account::Account(const Account& ref) :
    m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),
    m_balance(ref.m_balance) {
}
void Account::credit(double m_amount) {
    m_balance += m_amount;
}
void Account::debit(double m_amount) {
    //min balance check
    m_balance -= m_amount;
}
int Account::getM_accNumber() {
    return m_accNumber;
}
std::string Account::getM_accName() {
    return m_accName;
}
double Account::getM_balance() const {
    return m_balance;
}
void Account::display() {
    std::cout << m_accNumber << "," << m_accName << ","
              << m_balance << "\n";
}
int main() {
    return 0;
}
