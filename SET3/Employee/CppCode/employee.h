#include<iostream>
#include<string>

#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

class IEmployee {
  public:
  virtual void payroll(int,int,int,int)=0;
  virtual void appraisal(int)=0;
};

class Employee:public IEmployee {
  public:
  std::string m_empid;
  std::string m_name;
  double m_salary;
  int m_exp;
  int m_code;

  public:
  Employee(std::string , std::string , double ,int );
  virtual void display();
};

#endif

