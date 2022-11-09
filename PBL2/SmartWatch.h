#pragma once
#include "Product.h"

class SmartWatch : public Product {
private:
	string size;
	string batteryTime;
public:
	SmartWatch();
	SmartWatch(string, string, string, string, double, double, string, double, int, string);
	~SmartWatch();
	virtual void setSize(string&);
	virtual string getSize();
	virtual void setBatteryTime(string&);
	virtual string getBatteryTime();
	void ReadFILE(ifstream& filein);
	void WriteFILE(ostream&);
};
