#include "account.hpp"

#include <iostream>
#include <string>

using std::string;

namespace bank {

void Account::deposit(unsigned int amount) {
  balance_ += amount;
}

/* return the amount actually withdrawn */
unsigned int Account::withdraw(unsigned int amount)
{
  balance_ -= amount;
  return amount;
}


std::ostream& operator<<(std::ostream& out, const Account& a) {
  out << "Account(" << a.number() << ", " << a.balance() / 100 << " Euros and "
      << a.balance() % 100 << " Cents)";
  return out;
}

}  // namespace bank
