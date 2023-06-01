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
		balance = getBalance(balance);
	}

	void Setwelfare(double setter)
	{
		welfare = setter;
	}

	int Predictbalance(int year)
	{
		int expected = balance;
		for (int i = 0; i < year; i++)
		{
			expected = getBalance(expected);
		}
		return expected;
	}

	int getBalance(int balance)
	{
		return balance * (1 + welfare);
	}

private:
	int balance = 10000;
	double welfare = 0.05;
};
