#pragma once
#include "User.h"
#include "Product.h"
#include "Laptop.h"
#include "SmartPhone.h"
#include "SmartWatch.h"
#include "List.h"
#include "Invoice.h"
#include <fstream>
#define MAX 999
extern List<Laptop> listLT;
extern List<SmartPhone> listSP;
extern List<SmartWatch> listSW;
extern List<User> list_User;
extern List<Invoice> list_Invoice;
extern string Staff_Name;

void Save_Data_SmartPhone();
void Save_Data_Laptop();
void Save_Data_SmartWatch();
void Load_Data_Of_Laptop();
void Load_Data_Of_Smartphone();
void Load_Data_Of_Smartwatch();
template <class T, class U>
void Load_Data(T, U);
int NumOfDV(string filename);