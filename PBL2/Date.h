#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
class Date {
private:
	string dd;
	string mm;
	string yy;
public:
	Date();
	Date(string, string, string);
	string getDay();
	string getMonth();
	string getYear();
	void setDay(string);
	void setMonth(string);
	void setYear(string);
	void SetNULL();
	void setCurrentDate();
	void operator = (const Date& a);
	friend istream& operator >> (istream& in, Date& a);
	friend ostream& operator << (ostream& out, Date a);
};