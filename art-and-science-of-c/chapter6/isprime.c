/*
isprime.c
a program the returns 1 is a given number is prime, else 0
algo:
given n,
divid n by values between 1 and n
if any of them divides n, return 0
else 1

this will loop (n - 2) times, supposed the loop was to end for n to be prime.
so for n not to be prime, return 0, immediately a number divides into n.
*/

#include <stdio.h>

#define true 1
#define false 0

// isprime function
int isprime(int n);

int main()
{
	int nums[10] = {1, -23, -0, 45, 42, 12, -2, 73, 9, 14};

	for (int i = 0; i < 10; i++)
	{
		printf("%d %s prime.\n", nums[i], isprime(nums[i]) ? "is" : "is not");
	}

	return 0;
}

// isprim implementation
int isprime(int n)
{

	// check if n is negative
	if (n < 0)
	{
		n *= -1;
	}

	// 0 and 1 are not prime
	if (n == 0 || n == 1)
	{
		return false;
	}

	// 2 is prime..
	if (n == 2)
	{
		return true;
	}

	// all even numbers except 2, are not prime
	if (n % 2 == 0)
	{
		return false;
	}

	// looping through only odd numbers
	for (int x = 3; x < n / 2; x += 2)
	{
		if (n % x == 0)
		{
			return false;
		}
	}

	// original alg
	/*
	for (int x = 2; x < n; x++) {
		if (n % x == 0) {
			return false;
		}
	}
	
	return true;
	
	*/

	return true;
}
/*
ways to improve the algo
if x = 2, doesn't divide into n, then no even number would.
so use odd numbere through out
also, all even numbers after 2 are not prime, so check if n is even, and return 0
*/
