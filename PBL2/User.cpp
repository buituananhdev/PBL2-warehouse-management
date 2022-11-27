#include "User.h"

void User::setUsername(string& nUser) {
    this->username = nUser;
}
void User::setName(string& nName) {
    this->name = nName;
}
void User::setPassword(string& nPass) {
    this->password = nPass;
}
string User::getPassword() {
    return this->password;
}
string User::getUsername() {
    return this->username;
}
string User::getName() {
    return this->name;
}