#include<iostream>
#include<string>

#ifndef __TRAINEE_H
#define __TRAINEE_H

#include "employee.h"

class Trainee : public Employee {
  std::string m_track;
  double score;
  public:
  Trainee(std::string,std::string,double,double,int);
  void payroll();
  void appraisal();
  void display();
};

#endif


