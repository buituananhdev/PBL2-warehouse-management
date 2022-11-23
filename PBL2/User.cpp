#include "User.h"

void User::setUsername(string& nUser) {
    this->username = nUser;
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