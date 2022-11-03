#pragma once
#include "Product.h"
#include <string>
#include <vector>
using namespace std;

class Laptop : public Product {
private:
	string card;
	string weight;
public:
	void setCard(string&);
	void setWeight(string&);
	string getCard();
	string getWeight();

};