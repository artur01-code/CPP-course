#include "Account.h"

int main()
{
	Account frank;
	frank.set_name("Frank");
	std::cout << "Hey, my name is " << frank.get_name() << "." << std::endl;
	frank.set_balance(5000);
	std::cout << "I have " << frank.get_balance() << "€ on my account." << std::endl;
	if (frank.deposit(500))
		std::cout << "Deposit OK." << std::endl << "I have " << frank.get_balance() << "€ on my account." << std::endl;
	if (frank.withdraw(1000))
		std::cout << "Withdraw OK." << std::endl;
	std::cout << "I have " << frank.get_balance() << "€ on my account." << std::endl;
}