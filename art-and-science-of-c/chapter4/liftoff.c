/*
liftoff.c
a program that stimulates the lift off of a rocket
change liftofftimer to suit your specifications
*/

#include <stdio.h>

#define liftofftimer 100

int main() {
	
	printf("lift off in: \n");
	
	for (int t = liftofftimer; t > 0; t--) {
		printf("%4d\n", t);
	}
	
	printf("lift off!!! God speed.");
	
	return 0;
}
