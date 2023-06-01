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

	void Applywelfare()
	{
		balance *= 1.05;
	}

	void Setwelfare(double setter)
	{
		welfare = setter;
	}

private:
	int balance = 10000;
	double welfare = 0.05;
};
