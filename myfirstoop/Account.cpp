#include "Account.h"

void Account::set_name(std::string new_name)
{
	name = new_name;
}

std::string Account::get_name()
{
	return (name);
}

bool Account::deposit(double amount)
{
	balance += amount;
	return (true);
}

bool Account::withdraw(double amount)
{
	if (balance - amount < 0)
		return (false);
	else
	{
		balance -= amount;
		return (true);
	}
}
