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
	void setSize(string&);
	string getSize();
	void setBatteryTime(string&);
	string getBatteryTime();
};
