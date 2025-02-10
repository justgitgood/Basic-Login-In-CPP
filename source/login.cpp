#include <iostream>

#include "../headers/login.hpp"
#include "../headers/filehandler.hpp"

// Prompting the User to Login
void::User::PromptUser(){
  std::cout << "Username?" << '\n';
  std::cin >> Username;
  std::cout << "Password?" << '\n';
  std::cin >> Password;
}