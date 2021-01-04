/*
gcdlcm.c
a program that finds the gcd and lcm of X and Y
*/
#include <stdio.h>

/* gcd */
int gcd(a, b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int lcm(a, b)
{
	return (a * b) / gcd(a, b);
}

int main()
{
	int a = 12;
	int b = 18;

	printf("the gcd of %d and %d is %d\n", a, b, gcd(a, b));

	printf("the lcm of %d and %d is %d\n", a, b, lcm(a, b));

	return 0;
}
