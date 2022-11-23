#pragma once
#include <string>
using namespace std;
class User {
private:
	string username;
	string password;
public:
	void setUsername(string&);
	void setPassword(string&);
	string getUsername();
	string getPassword();
};