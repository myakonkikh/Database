#pragma once

#include <iostream>

using namespace std;

struct Date 
{
  int year;
  int month;
  int day;
};

ostream& operator << (ostream& os, const Date& date);
bool operator == (const Date& lhs, const Date& rhs);
bool operator != (const Date& lhs, const Date& rhs);
bool operator < (const Date& lhs, const Date& rhs);
bool operator <= (const Date& lhs, const Date& rhs);
bool operator > (const Date& lhs, const Date& rhs);
bool operator >= (const Date& lhs, const Date& rhs);

Date ParseDate(istream& is);
