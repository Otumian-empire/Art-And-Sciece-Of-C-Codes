/*
digitsum.c
a program that returns the reverse of a given integer value
*/

#include <stdio.h>

int main()
{
	int val, temp, rem;

	printf("enter number: ");
	scanf("%d", &val);

	temp = val;

	if (val > 0)
	{
		printf("%d, when reversed is: ", val);

		while (temp > 0)
		{
			rem = (temp % 10);
			temp /= 10;
			printf("%d", rem);
		}
	}
	else
	{
		printf("enter a value greater than zero\n");
	}

	return 0;
}
