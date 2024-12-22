#include "account.hpp"

#include <iostream>

int main() {
  bank::Account a1("Amelie", 1234);
  bank::Account a2("Marielle", 1235, 1000);
  std::cout << a1 << std::endl;
  a1.deposit(1000);
  std::cout << a1 << std::endl;
  std::cout << a2 << std::endl;
  return 0;
}
