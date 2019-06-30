/*
sixesXorsevens.c
a program that displays the integers between X and Y that are divisible by either 6 or 7.
*/

#include <stdio.h>

#define startAt 1
#define endAt 100


int main()
{
	for (int i = startAt; i <= endAt; i++) {
		if (!(i % 6 == 0 && i % 7 == 0) && (i % 6 == 0 || i % 7 == 0)) {
			printf("%d\n", i);
		}
	}
	
	printf("\n\n");
	/*
	printf("using if \n");
	
	for (int i = startAt; i <= endAt; i++) {
		
		if (!(i % 6 == 0 && i % 7 == 0)) {
			if ((i % 6 == 0 || i % 7 == 0)) {
				printf("%d\n", i);
			}
		}
	}
	*/
	
	return 0;
}
