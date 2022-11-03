#include "Laptop.h"
#include "Product.h"
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

void Laptop::setCard(string& ncard) {
	this->card = ncard;
}
void Laptop::setWeight(string& nweight) {
	this->weight = nweight;
}
string Laptop::getCard() {
	return this->card;
}
string Laptop::getWeight() {
	return this->weight;
}
