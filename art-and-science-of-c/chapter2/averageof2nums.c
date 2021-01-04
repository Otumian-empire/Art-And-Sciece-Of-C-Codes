/*
averageof2nums.c
A program that computes the average of 2 numbers
Take 2 inputs from the user as reals
Find their sum and divide it by 2
*/

#include <stdio.h>

int main()
{
	float num1, num2, avgf2num;

	printf("enter the first real: ");
	scanf("%f", &num1);

	printf("enter the second real: ");
	scanf("%f", &num2);

	avgf2num = (num1 + num2) / 2;

	printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, avgf2num);

	return 0;
}
