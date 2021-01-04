/*
comoutesumbetweenxtoy.c
a program that computes the sum between 1 and 100
you can modify this program by changing the startIndex and bendIndex
*/

#include <stdio.h>

#define startIndex 1
#define endIndex 100

int main() {
	
	int total = 0;
	
	for (int i = startIndex; i <= endIndex; i++) {
		total += i;
	}
	
	printf("the sum of numbers between %d and %d is %d", startIndex, endIndex, total);
	
	return 0;
}
