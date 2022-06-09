#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
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

#endif