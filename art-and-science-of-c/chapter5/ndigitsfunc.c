/*
ndigitfunc.c
a program (function) that returns the number of digits in a given number n.
we assume n may be positive

limitations {
	this program only works for integers of 
	about 9 digits, for more change to long long
}
*/

#include <stdio.h>

int ndigit(int n);

int main()
{

	int n = 220310034;

	printf("there are %d digits in %d\n", ndigit(n), n);

	return 0;
}

/*
a function that returns the number of
 digits in a given number
*/
int ndigit(int n)
{

	int counter = 0;

	while (n > 0)
	{
		n /= 10;
		counter++;
	}

	return counter;
}
