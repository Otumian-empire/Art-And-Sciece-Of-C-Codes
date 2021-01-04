/*
amountcalculator.c
a  program  that  reads  in  two  numbers:
an  account  balance  and  an  annual interest  rate  expressed  as  percentage and then  display  the  new balance  after.
*/

#include <stdio.h>

int main() {
	float accountBalance, annualInterest, afterBalance;
	
	printf("enter the account balance: ");
	scanf("%f", &accountBalance);
	
	printf("enter the annual interest  rate  expressed  as  percentage: ");
	scanf("%f", &annualInterest);
	
	afterBalance = ((accountBalance * 100) + (accountBalance * annualInterest)) / 100.0;
	
	printf("The balance after on %.2f at a rate of %.4f is %.2f", accountBalance, annualInterest, afterBalance);
	
	return 0;
}
