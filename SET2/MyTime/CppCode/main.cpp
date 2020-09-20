#include <iostream>
#include "mytime.h"
using namespace std;
MyTime::MyTime():m_hours(0),m_minutes(0), m_seconds(0) { }
MyTime::MyTime(int h, int m, int s) : m_hours(h), m_minutes(m), m_seconds(s) {
    std::cout << m_hours << ":" << m_minutes << ":" << m_seconds <<"\n";
}
MyTime::MyTime(int h, int m) : m_hours(h), m_minutes(m) {}
MyTime MyTime::operator+(const MyTime &ref) {
    int tmins=0,thrs=0;
    int tsec = m_seconds + ref.m_seconds;
    if (tsec>60) {
        tmins+=(tsec/60);
        tsec = tsec%60;
    } else if(tsec==60)
        tmins+=1;
    tmins+=m_minutes + ref.m_minutes;
    if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;
    }
    thrs+=m_hours + ref.m_hours;
    return MyTime(thrs, tmins, tsec);
}
MyTime MyTime::operator-(const MyTime &ref) {
    int tmins=0,thrs=0;
    int tsec = m_seconds - ref.m_seconds;
    if(tsec<0) {
        tmins-=1;
        tsec=abs(tsec);
    }
    if (tsec>60) {
        tmins-=(tsec/60);
        tsec = tsec%60;
    } else if(tsec==60)
        tmins+=1;
    tmins-=m_minutes - ref.m_minutes;
    if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;
    }
    thrs+=m_hours - ref.m_hours;
    if(thrs<0)
        thrs=0;
    return MyTime(thrs, tmins, tsec);
}
MyTime MyTime::operator+(int nmins) {
    int thrs=0;
    int tsec=m_seconds;
    int tmins = m_minutes + nmins;
     if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;
    }
    thrs+=m_hours;
    return MyTime(thrs, tmins,tsec);
  }
MyTime MyTime::operator-(int nmins) {
    int thrs=0;
    int tsec=m_seconds;
    int tmins = m_minutes - nmins;
     if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;
    }
    else if(tmins<0)
    {
        thrs-=1;
        tmins=abs(tmins);
    }
    thrs+=m_hours;
    return MyTime(thrs, tmins,tsec);

  }
MyTime MyTime::operator++() {
     ++m_seconds;

    if(m_seconds>=60)
    {
       m_minutes+=(m_seconds/60);
        m_seconds = m_seconds%60;
    }
    if(m_minutes>=60)
    {
       m_hours+=(m_minutes/60);
        m_minutes = m_minutes%60;
    }

    cout<<m_hours<<":"<<m_minutes<<":"<<m_seconds<<endl;
  }
MyTime MyTime::operator++(int d) {

    ++m_seconds;
    if(m_seconds>60)
    {
       m_minutes+=(m_seconds/60);
        m_seconds = m_seconds%60;
    }
    if(m_minutes>60)
    {
       m_hours+=(m_minutes/60);
        m_minutes = m_minutes%60;
    }
    cout<<m_hours<<":"<<m_minutes<<":"<<m_seconds<<endl;
  }

MyTime MyTime::operator+=(int d) {

    m_seconds+=m_seconds;
    if(m_seconds>60)
    {
       m_minutes+=(m_seconds/60);
        m_seconds = m_seconds%60;
    }
    m_minutes+=m_minutes;
    if(m_minutes>60)
    {
       m_hours+=(m_minutes/60);
        m_minutes = m_minutes%60;
    }
    cout<<m_hours<<":"<<m_minutes<<":"<<m_seconds<<endl;
  }
 bool MyTime::operator==(const MyTime &ref) {
   return m_hours == ref.m_hours && m_minutes == ref.m_minutes && m_seconds == ref.m_seconds;
  }
  bool MyTime::operator<(const MyTime &ref) {
   return m_hours < ref.m_hours && m_minutes < ref.m_minutes && m_seconds < ref.m_seconds;
  }
  bool MyTime::operator>(const MyTime &ref) {
   return m_hours > ref.m_hours && m_minutes > ref.m_minutes && m_seconds > ref.m_seconds;
  }
void MyTime::display () {
    std::cout << "Time is: " << m_hours <<":" <<m_minutes << ":" <<m_seconds<< "\n";
}
int main()
{
    return 0;
}

