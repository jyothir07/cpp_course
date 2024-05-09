/*#include<iostream>
using namespace std;
class BankAccount {
private:
	int balance;
public:
	BankAccount(int initBalance) :balance{ initBalance } {}
	int getBalance() { return this->balance; }
	BankAccount operator+(const BankAccount& operandtwo) const {
		BankAccount newAccount{ 0 };
		newAccount.balance = this->balance + operandtwo.balance;
		return newAccount;
	}
};


int main() {
	BankAccount acc1{ 1000 };
	BankAccount acc2{ 2000 };
	cout << acc1.getBalance() << endl;
	cout << acc2.getBalance() << endl;
	BankAccount acc3 = acc1 + acc2;
	cout << acc3.getBalance() << endl;
}
*/

#include<iostream>
using namespace std;
class BankAccount {
private:
	int balance;
public:
	BankAccount(int initBalance) :balance{ initBalance } {}
	int getBalance() const { return this->balance; }
	BankAccount operator+(const BankAccount& operandtwo) const {
		BankAccount newAccount{ 0 };
		newAccount.balance = this->getBalance() + operandtwo.getBalance();
		return newAccount;
	}
	friend ostream& operator<<(ostream& out, const BankAccount& operandTwo)
	{
		out << "Current Balance is" << operandTwo.balance << endl;
		return out;
	}
};
int main() {
	BankAccount acc1{ 1000 };
	BankAccount acc2{ 2000 };
	cout << acc1.getBalance() << endl;
	cout << acc2.getBalance() << endl;
	BankAccount acc3 = acc1 + acc2;
	cout << acc3.getBalance() << endl;
}