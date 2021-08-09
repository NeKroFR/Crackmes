#include <iostream>
#include<string.h>


int main() {
  char input[250] = "";
  char pwd[] = "password";
  std::cout << "Enter the password please: ";
  std::cin >> input;

  if (strcmp (input, pwd) == 0)
    {
        std::cout << "Well done !\n";
    }
    else
    {
        std::cout << "This is not the good password !\nTry Again !\n";
    }

    return 0;
}
