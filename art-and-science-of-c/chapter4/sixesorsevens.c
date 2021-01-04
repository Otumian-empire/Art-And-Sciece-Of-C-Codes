/*
sixesorsevens.c
a  program  that  displays  the  integers  between  X and  Y  that  are  divisible  by either  6 or  7.
*/

#include <stdio.h>

#define startAt 1
#define endAt 100


int main()
{
	for (int i = startAt; i <= endAt; i++) {
		if ((i % 6 == 0) || (i % 7 == 0)) {
			printf("%d\n", i);
		}
	}
	
	printf("\n\n");
	
	return 0;
}
