/*
leapyear.c
a program that verifies if a given year is a leap year.
for a given input to be a Leapyear, it must statisfy:
- The year  is divisible by  4 but(and)  not  divisible by  100, or
- The year  is divisible by  400.
*/

#include <stdio.h>

/*
define the constants, false
so that 0 won't be used directly
*/
#define false 0

int main()
{
	int isleapyear = false;
	int year;

	printf("enter the year: ");
	scanf("%d", &year);

	isleapyear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if (isleapyear)
	{
		printf("%d is leap year\n", year);
	}
	else
	{
		printf("%d is not leap year\n", year);
	}

	return 0;
}
