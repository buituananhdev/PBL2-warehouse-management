#include "Invoice.h"
#include <iostream>

Invoice::Invoice()
{
	this->ID = '\0';
}
void Invoice::setID(string nID) {
	this->ID = nID;
}
string Invoice::getID() {
	return ID;
}
void Invoice::setProductName(string nPN) {
	this->productName = nPN;
}
string Invoice::getProductName() {
	return this->productName;
}
void Invoice::setTotalAmount(int nAmount) {
	this->totalAmount = nAmount;
}
int Invoice::getTotalAmount() {
	return this->totalAmount;
}
void Invoice::setTotalMoney(double nTotal) {
	this->totalMoney = nTotal;
}
double Invoice::getTotalMoney() {
	return this->totalMoney;
}
void Invoice::setCustomerName(string nCusName) {
	this->customerName = nCusName;
}
string Invoice::getCustomerName() {
	return this->customerName;
}
void Invoice::setStaffName(string nStaffName) {
	this->staffName = nStaffName;
}
string Invoice::getStaffName() {
	return this->staffName;
}
void Invoice::setcreateDate(string nDate) {
	this->createDate = nDate;
}
string Invoice::getCreateDate() {
	return this->createDate;
}
void Invoice::WriteFILE(ostream& fileout) {
	fileout << ID << ',' << productName << ','  << totalAmount << ',' << totalMoney << ',' << customerName << ',' << staffName << ',' << createDate << endl;
}