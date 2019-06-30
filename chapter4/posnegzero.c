/*
posnegzero.c
a program that checks if a given integer input is positive, negative or zero
LOGIC:
if value > 0, +
if value < 0, -
else 0
*/

#include <stdio.h>

int main() {
	
	int val;
	
	printf("enter value: ");
	scanf("%d", &val);
	
	if (val > 0) {
		printf("%d is +ve\n", val);
	} else if(val == 0) {
		printf("%d is zero(0)\n", val);
	} else {
		printf("%d is -ve\n", val);
	}
	
	return 0;
}
