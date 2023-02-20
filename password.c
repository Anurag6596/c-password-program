#include <stdio.h>
#include <string.h>

int main() {
  char username[50]; //declaired charecter array of type username of size 50

  char password[50]; //declaired charecter array of type password of size 50

  char correct_username[] = "myusername"; //We then prompt the user to enter their own username and password using the scanf function, and store their input in the username and password variables.

  char correct_password[] = "mypassword";

  printf("Please enter your username: ");
  scanf("%s", username);

  printf("Please enter your password: ");
  scanf("%s", password);

  if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) { // here we use "strcmp" to compare two credentials with predefine ones if they match the message will be printed as the "login successful".
    printf("Login successful!\n");
  } else {
    printf("Incorrect username or password. Please try again.\n");  // and if password is not correct the loop will go for else statement and the the message will be printed that the password is incorrect.
  }

  return 0;
}
