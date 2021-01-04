/*
sumofXoddnumbers.c
a program that reads in a positive integer N  
and then calculates and displays the sum  
of the first N odd integers.
 For example, if N is 4, the program would display 
the value 16, which is 1 + 3 + 5 + 7.
*/

#include <stdio.h>

int main()
{
	int Nint;
	printf("enter a positive integer: ");
	scanf("%d", &Nint);

	// using a while loop
	int val = 1;
	int oddsum = 0;
	int temp = Nint;

	while (temp > 0)
	{
		if (val % 2 == 1)
		{
			oddsum += val;

			temp--;
		}

		val += 2;
	}

	printf("the sum of %d odd numbers is %d\n", Nint, oddsum);

	// using a formula

	return 0;
}
