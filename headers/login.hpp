#include <iostream>
#include <string>

#ifndef LOGIN_H
#define LOGIN_H

#define USERNAME_LENGTH 20
#define PASSWORD_LENGTH 10

class User {
public:

void PromptUser();

private:
std::string Username;
std::string Password;
};

#endif LOGIN_H