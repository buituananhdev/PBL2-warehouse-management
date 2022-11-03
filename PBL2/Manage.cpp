#include "Manage.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 9999
vector<Laptop*> list;
int length;

void Manage::setUsername(string& nUser) {
    this->username = nUser;
}
void Manage::setPassword(string& nPass) {
    this->password = nPass;
}
string Manage::getPassword() {
    return this->password;
}
string Manage::getUsername() {
    return this->username;
}
void Manage::setLength(int nlength) {
    length = nlength;
}
