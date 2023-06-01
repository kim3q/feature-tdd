class Account
{
public:

	explicit Account(int money)
		: balance(money) {}

	int getBalance()
	{
		return balance;
	}

	void deposit(int moeny)
	{
		balance += moeny;
	}

	void Withdraw(int money)
	{
		balance -= money;
	}

private:
	int balance = 10000;

};