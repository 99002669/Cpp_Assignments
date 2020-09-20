#include <iostream>
#include "CustomerFinal.h"
Customer::Customer() :
    m_custId(0), m_phone(0), m_custName(0), m_balance(0) {
}
Customer::Customer(int phone, std::string name, int customerid, double balance) :
    m_phone(phone), m_custName(name), m_custId(customerid), m_balance(balance) {

}
Customer::Customer(int phone, std::string name, int customerid) :
    m_phone(phone), m_custName(name), m_custId(customerid) {

}
Customer::Customer(const Customer& ref) :
    m_custId(ref.m_custId), m_phone(ref.m_phone), m_type(ref.m_type), m_custName(ref.m_custName), m_balance(ref.m_balance) {
}
void Customer::credit(AccountType creditacc) {
    switch(creditacc) {
    case Savings:
        std::cout<<"Credit money to Savings Account...";
    case Current:
        std::cout<<"Credit money to Current Account...";
    }
}
void Customer::makeCall() {
    std::cout<<"Calling on phone number : "<<m_phone<<" ...";
}
double Customer::getBalance() const {
    return m_balance;
}
void Customer::display() {
    std::cout << "Customer ID is: "<<m_custId<<", Account Type: "<<m_type<<", Customer Name: "<<m_custName<<", Balance: " << m_balance;
}
int main() {
    return 0;
}
