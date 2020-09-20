#include <iostream>
#include "employee.h"
#include "engineer.h"
#include "manager.h"
#include "trainee.h"
using namespace std;

void IEmployee ::payroll(int BasicPay,int Allowance,int IncomeTax,int Deduction ) {
    int a= (BasicPay +IncomeTax +Allowance -Deduction);
    cout << a;
}
void IEmployee:: appraisal(int BasicPay) {
        int app= (BasicPay+(5*(BasicPay/100)));
        cout <<app<<endl;
}
void Employee(string m_empid, string m_name, double m_salary,int m_exp)
{
  cout << m_empid << ","<< "," << m_name << "," << m_salary << "," << m_exp << "\n";
}

void Employee::display() {
    cout<< m_empid << "," << m_name << "," << m_salary << "," << m_exp << "\n";
}
  void Engineer(string m_empid, string m_name, double m_salary,int m_exp,int m_projCode) {
    cout << m_empid << "," << m_name << "," << m_salary << "," << m_exp << "," << m_projCode << "\n";
}
void Engineer::display() {
    cout << m_projCode << "\n";
}
 void Manager(string m_empid, string m_name, double m_salary,int m_exp,int m_projCode,int m_reportees) {
    cout << m_empid << "," << m_name << "," << m_salary << "," << m_exp << "," << m_projCode << "," << m_reportees << "\n";
}
void Manager::display() {
    cout << m_reportees << "\n";
}
void Trainee(string m_empid,string m_name, double m_salary,string m_track,double score){
    std::cout << m_empid << "," << m_name << "," << m_salary << "," << m_track << "," << score << "\n";
}

void Trainee::display() {
    cout << m_track << "," << score << "\n";
}

int main() {

    return 0;
}
