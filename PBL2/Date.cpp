#include "Date.h"
#include <string>
#include <sstream>
#include <ctime>
Date::Date() {

}
Date::Date(string dd, string mm, string yy) {
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}
string Date::getDay() {
	return this->dd;
}
string Date::getMonth() {
	return this->mm;
}
string Date::getYear() {
	return this->yy;
}
void Date::SetNULL() {
	this->dd = "NULL";
	this->mm = "NULL";
	this->yy = "NULL";
}
void Date::setCurrentDate() {
	time_t now = time(0);// current date/time based on current system
	tm* ltm = localtime(&now);
	this->dd = to_string(ltm->tm_mday);
	this->mm = to_string(1 + ltm->tm_mon);
	this->yy = to_string(1900 + ltm->tm_year);
}
void Date::setDay(string nDay) {
	this->dd = nDay;
}
void Date::setMonth(string nMonth) {
	this->mm = nMonth;
}
void Date::setYear(string nYear) {
	this->yy = nYear;
}
ostream& operator << (ostream& out, Date a) {
	out << a.dd << "/" << a.mm << "/" << a.yy;
	return out;
}

istream& operator >> (istream& in, Date& a) {
		cout << "(Vui long nhap ngay thang nam la cac gia tri hop le!)\n";
		cout << "\nNhap ngay: ";
		getline(in, a.dd); fflush(stdin);
		cout << "\nNhap thang: ";
		getline(in, a.mm); fflush(stdin);
		cout << "\nNhap nam: ";
		getline(in, a.yy); fflush(stdin);
	return in;
}
void Date::operator = (const Date& a) {
	this->dd = a.dd;
	this->mm = a.mm;
	this->yy = a.yy;
}