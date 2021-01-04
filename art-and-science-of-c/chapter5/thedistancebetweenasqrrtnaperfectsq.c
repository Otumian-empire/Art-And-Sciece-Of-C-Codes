/*
thedistancebetweenasqrrtnaperfectsq.c
a program that computes and displays the range between a square root and it's perfeft square
*/

#include <stdio.h>

#define limit 100

int psquare(int num);
int psqrrt(int num);

int main()
{
	int num = 0;

	/*
	printf("Numbers perfect squares\n");
	
	while (num <= limit) {
		printf("%3d %15d\n", num, psquare(num));
		num++;
	}
	
	num = 0;
	
	printf("numbers and their square root\n");
	
	while (num <= limit) {
		printf("%3d %15d\n", psquare(num), psqrrt(num));
		num++;
	}
	*/

	for (int i = 0; i < limit; i++)
	{
		printf("%d has an sqrt of %d\n", i, psqrrt(i));
	}

	return 0;
}

/* 
perfect square function, 
returns the square of a number, n (n * n)
*/
int psquare(int num)
{

	return num * num;
}

/*
square root function, 
returns tue square root of a number, n
n raised to the power half.
this function on works for finding the root of perfect squares.
*/
int psqrrt(int num)
{

	int div = 1;

	while (num / div != div)
	{
		div++;
	}

	return div;
}
