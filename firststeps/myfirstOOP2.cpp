#include <iostream>

class Account {
	//attributes
private:
	std::string name;
	double balance;
	
	//methods
public:
	void set_balance(double bal) {balance = bal;}
	double get_balance() {return (balance);}

	//predefined methods
	void set_name(std::string name);
	std::string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);
};



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

//TASK: split those things into multiple files so that it is nice and clean