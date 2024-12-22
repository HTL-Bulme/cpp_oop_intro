// SPDX-FileCopyrightText: 2023 Gerald Senarclens de Grancy <sg@bulme.at>
// SPDX-License-Identifier: MIT

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

namespace bank {

using std::string;

class Account {
public:
  Account(string owner, unsigned int number, unsigned int deposit)
      : balance_{deposit}, owner_{owner}, number_{number} {}
  Account(string owner, unsigned int number) : Account(owner, number, 0l) {}

  void deposit(unsigned int amount);
  unsigned int withdraw(unsigned int amount);
  long long balance() const { return balance_; }
  unsigned int number() const { return number_; }
  string owner() const { return owner_; }

private:
  long long balance_ = 0l;
  std::string owner_;
  unsigned long number_;
};

std::ostream& operator<<(std::ostream& out, const Account& a);

}  // namespace bank

#endif // ACCOUNT_H

