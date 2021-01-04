/*
gdcbruteforce.c

computation of gcd of x and y using the brute force approach
*/

#include <stdio.h>

// brute-force
int bfgcd(int x, int y);

// brute-force recursion
int bfgcdr(int x, int y, int g);
// brute-force forloop
int bfgcdf(int x, int y);

int main()
{
	int x = 24, y = 18, g = x;

	printf("the bfgcd of %d and %d is %d\n", x, y, bfgcd(x, y));
	printf("the bfgcdr of %d and %d is %d\n", x, y, bfgcdr(x, y, g));
	printf("the bfgcd of %d and %d is %d\n", x, y, bfgcdf(x, y));

	return 0;
}

// the brute-force approach
int bfgcd(int x, int y)
{
	int guess = x;

	while (x % guess != 0 || y % guess != 0)
	{
		guess--;
	}

	return guess;
}

// using recursive approach
int bfgcdr(int x, int y, int guess)
{
	if (x % guess == 0 && y % guess == 0)
	{
		return guess;
	}

	--guess;

	return bfgcdr(x, y, guess);
}

// using the for loop
int bfgcdf(int x, int y)
{
	int guess;

	for (guess = x; x % guess != 0 || y % guess != 0;)
	{
		guess--;
	}

	return guess;
}
