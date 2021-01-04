/*
liftoffwithwhileloop.c
a program that stimulates the lift off of a rocket using a while loop
change liftofftimer to suit your specifications
*/

#include <stdio.h>

#define liftofftimer 100

int main() {
	
	printf("lift off in: \n");
	
	int t = liftofftimer;
	
	while (t > 0) {
		printf("%4d\n", t);
		t--;
	}
	
	printf("lift off!!! God speed.");
	
	return 0;
}
