/*
amountcalculator_extended.c
a  program  that  reads  in  three real inputs:
an  account  balance,  an  annual interest  rate expressed  as  percentage and the
 time of investment.
then  display  the peroid, interest made and the  new balance during that year.
(we are looking may at compounded interest)
*/

#include <stdio.h>

int main()
{
	float accountBalance,
		annualInterest,
		afterBalance,
		investmentTime;

	printf("enter the account balance: ");
	scanf("%f", &accountBalance);

	printf("enter the annual interest  rate  expressed  as  percentage: ");
	scanf("%f", &annualInterest);

	printf("enter the time of investment: ");
	scanf("%f", &investmentTime);

	for (int i = 0; i < investmentTime; i++)
	{
		afterBalance = ((accountBalance * 100) + (accountBalance * annualInterest));
		afterBalance = afterBalance / 100.0;

		printf("At time %d, the balance after on %.2f at a rate of %.4f is %.2f\n",
			   i + 1, accountBalance, annualInterest, afterBalance);

		accountBalance = afterBalance;
	}

	return 0;
}
