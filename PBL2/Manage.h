#pragma once
#include "User.h"
#include "Product.h"
#include "Laptop.h"
#include "SmartPhone.h"
#include "SmartWatch.h"
#include <vector>
#include <fstream>
#define MAX 9999
extern User list_User[100];
extern Laptop listLT[MAX];
extern SmartPhone listSP[MAX];
extern SmartWatch listSW[MAX];
extern string Staff_Name;
extern int length;

void Save_Data_SmartPhone();
void Save_Data_Laptop();
void Save_Data_SmartWatch();
void Load_Data_Of_Laptop();
void Load_Data_Of_Smartphone();
void Load_Data_Of_Smartwatch();

int NumOfDV(string filename);
int Search(string name);
void Remove_ID_SP(int);
void Remove_ID_SW(int);
void Remove_ID_LT(int);
int Search_Name_SP(string);
/*
template<typename T>
void Remove(int index,string t) {
	T L[MAX];
	for (int i = index; i < NumOfDV(t); i++) {
		L[i] = L[i + 1];
	}
} */