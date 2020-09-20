#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>

class AccountBase {
    private:
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  AccountBase();
  AccountBase(std::string,std::string,double);
  AccountBase(std::string,std::string);
  AccountBase(const AccountBase &);
  virtual void debit(double)=0;
  virtual void credit(double)=0;
  virtual void display() const = 0;
  double getBalance() const;
};

#endif


