#include <iostream>
#include <string>

using namespace std;

class Player {
public:
	//attributes
	string name;
	int health;
	int xp;

	//methods
	void talk(string text_to_say) {
		cout << name << ": " << text_to_say << endl;
	}
	bool is_dead();
};

class Account {
public:
	//attributes
	string name;
	double balance;

	//methodes
	bool deposit(double bal) {balance += bal; cout << "The Balance is now: " << balance << "." << endl;}
	bool withdraw(double bal) {balance -= bal; cout << "The Balance is now: " << balance << "." << endl;}
};

int main()
{
	Account frank_account;
	frank_account.name = "Franks account";
	frank_account.balance = 5000.0;

	frank_account.deposit(1000.0);
	frank_account.withdraw(500.0);


	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	frank.talk("Hey everyone!");

	Player *thomas = new Player;
	thomas->name = "Thomas";
	thomas->health = 100;
	thomas->xp = 15;
	thomas->talk("It is what it is!");
}