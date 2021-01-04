/*
evenodd.c
a program that checks if a given integer input is 
an even nunber or an odd number
*/

#include <stdio.h>

int main()
{
	int val = 0;

	printf("enter an int value: ");
	scanf("%d", &val);

	if (val % 2 == 0)
	{
		printf("%d is even\n", val);
	}
	else
	{
		printf("%d is odd\n", val);
	}

	return 0;
}
