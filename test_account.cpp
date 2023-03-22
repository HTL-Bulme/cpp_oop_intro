#include "account.hpp"

#include <catch2/catch_test_macros.hpp>


TEST_CASE("bank accounts work properly", "[account]") {
  bank::Account a1("Pat", 1234);
  bank::Account a2("Chris", 1235, 1000);

  long x = 0ll;

  REQUIRE(a1.balance() == 0);
  REQUIRE(a2.balance() == 1000);
  REQUIRE(a1.number() == 1234);
  REQUIRE(a2.number() == 1235);
  REQUIRE(a1.owner() == "Pat");
  REQUIRE(a2.owner() == "Chris");

  SECTION("deposits can be made") {
    a1.deposit(1500);
    a2.deposit(2500);

    REQUIRE(a1.balance() == 1500);
    REQUIRE(a2.balance() == 3500);
  }

  SECTION("money can be withdrawn") {
    a2.withdraw(800);

    REQUIRE(a2.balance() == 200);
  }

  SECTION("accounts can be overdrawn") {
    a1.withdraw(1000);
    a2.withdraw(3500);

    REQUIRE(a1.balance() == -1000);
    REQUIRE(a2.balance() == -2500);
  }
}
