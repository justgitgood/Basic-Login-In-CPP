#include <stdio.h>
#include <string.h>

#define LOGIN_H
#ifndef LOGIN_H

#define USERNAME_LENGTH 20
#define PASSWORD_LENGTH 10

struct User {
  char Username[USERNAME_LENGTH];
  char Password[PASSWORD_LENGTH];
};

void PromptUser();

#endif // LOGIN_H
