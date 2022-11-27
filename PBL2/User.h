#pragma once
#include <string>
using namespace std;
class User {
private:
	string name;
	string username;
	string password;
public:
	void setName(string&);
	void setUsername(string&);
	void setPassword(string&);
	string getName();
	string getUsername();
	string getPassword();
};