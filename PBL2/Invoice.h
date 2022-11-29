#pragma once
#include <string>
using namespace std;
class Invoice {
private:
	string ID;
	string productName;
	int totalAmount;
	double totalMoney;
	string customerName;
	string staffName;
	string createDate;
public:
	Invoice();
	void setID(string);
	string getID();
	void setProductName(string);
	string getProductName();
	void setTotalAmount(int);
	int getTotalAmount();
	void setTotalMoney(double);
	double getTotalMoney();
	void setCustomerName(string);
	string getCustomerName();
	void setStaffName(string);
	string getStaffName();
	void setcreateDate(string);
	string getCreateDate();
	void WriteFILE(ostream&);
};