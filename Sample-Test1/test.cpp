#include "pch.h"
#include "..\Project11/cal.cpp"
#include <vector>

using namespace std;

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};
TEST_F(AccountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.Withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, ApplyWelfare) {
	account.Applywelfare();
	EXPECT_EQ(10500, account.getBalance());
	account.Applywelfare();
	EXPECT_EQ(11025, account.getBalance());
}

TEST_F(AccountFixture, ChangeWelfare) {
	account.Applywelfare();
	EXPECT_EQ(10500, account.getBalance());
	account.Setwelfare(0.1);
	account.Applywelfare();
	EXPECT_EQ(11550, account.getBalance());
}
