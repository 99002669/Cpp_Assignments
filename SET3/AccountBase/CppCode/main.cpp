#include <iostream>
#include <string.h>
#include "account.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"

using namespace std;


AccountBase::AccountBase():
     m_accNumber("None"),m_accName("None"), m_balance(0){
}

AccountBase::AccountBase(string Number, string name, double balance):
    m_accNumber(Number), m_accName(name), m_balance(balance){
}

AccountBase::AccountBase(string Number, string Name):
    m_accName("None"), m_accNumber("None"){
}

AccountBase::AccountBase(const AccountBase &ref):
    m_accNumber(ref.m_accNumber), m_accName(ref.m_accName), m_balance(m_balance){
}

void AccountBase::credit(double amount) {
  m_balance += amount;
}
void AccountBase::debit(double amount) {
  //min balance check
  m_balance -= amount;
}

void AccountBase::display() const {
    std::cout << m_accNumber << "," << m_accName << ","
                                         << m_balance << "\n";
}

double AccountBase::getBalance() const
{
    return(m_balance);
}

SavingsAccount::SavingsAccount():AccountBase(){}

SavingsAccount::SavingsAccount(string m_accNumber, string m_accName,double m_balance):AccountBase(m_accNumber, m_accName, m_balance){}

SavingsAccount::SavingsAccount(string m_accNumber, string m_accName):AccountBase(m_accNumber, m_accName){}

void SavingsAccount::debit(double amount)
{
    int m=AccountBase::getBalance() ;
    m=m-amount;
    cout<<m<<endl;
}

void SavingsAccount::credit(double amount)
{
   int m=AccountBase::getBalance() ;
    m=m+amount;
    cout<<m<<endl;
}
void SavingsAccount::display() const
{
int m=AccountBase::getBalance() ;

    cout<<m<<endl;
}

CreditAccount::CreditAccount():AccountBase(){}

CreditAccount::CreditAccount(string m_accNumber, string m_accName,double m_balance):AccountBase(m_accNumber, m_accName, m_balance){}

CreditAccount::CreditAccount(string m_accNumber, string m_accName):AccountBase(m_accNumber, m_accName){}

void CreditAccount::debit(double amount)
{
   int m=AccountBase::getBalance() ;
    m=m-amount;
    cout<<m<<endl;
}

void CreditAccount::credit(double amount)
{
   int m=AccountBase::getBalance() ;
    m=m+amount;
    cout<<m<<endl;
}
void CreditAccount::display() const
{
int m=AccountBase::getBalance() ;
    cout<<m<<endl;
}



int main()
{

    return 0;
}
