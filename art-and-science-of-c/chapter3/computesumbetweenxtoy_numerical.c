/*
comoutesumbetweenxtoy_numerical.c
a program that computes the sum between 1 and 100
this is numerical version of comoutesumbetweenxtoy.c without a loop but a formula
S = n(n+1)/2
you can modify this program by changing the startIndex and bendIndex
*/

#include <stdio.h>

#define startIndex 1
#define endIndex 100

int main() {
	
	/* n refers to the number of elements between startIndex and endIndex, inclusive */
	int n = (endIndex - startIndex) + 1;
	
	int total = n * (n + 1) / 2;
	
	printf("the sum of numbers between %d and %d is %d", startIndex, endIndex, total);
	
	return 0;
}
