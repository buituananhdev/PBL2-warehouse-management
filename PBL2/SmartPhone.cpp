#include "SmartPhone.h"
#include "Product.h"
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
using namespace std;

SmartPhone::SmartPhone() {
	this->ID = "";
	this->name = "";
	this->brand = "";
	this->color = "";
	this->priceF = 0;
	this->status = "";
	this->amount = 0;
	this->ram = "";
	this->rom = "";
}
SmartPhone::~SmartPhone() {

}
SmartPhone::SmartPhone(string ID, string name, string brand, string color, double priceF, double priceE, string status, double discount, int amount, string ram, string rom) {
	this->ID = ID;
	this->name = name;
	this->brand = brand;
	this->color = color;
	this->priceF = priceF;
	this->status = status;
	this->amount = amount;
	this->ram = ram;
	this->rom = rom;
}
string SmartPhone::getRam() {
	return this->ram;
}
void SmartPhone::setRam(string& nRam) {
	this->ram = nRam;
}
string SmartPhone::getRom() {
	return this->rom;
}
void SmartPhone::setRom(string& nRom) {
	this->rom = nRom;
}
