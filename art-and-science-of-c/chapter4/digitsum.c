/*
digitsum.c
a program that returns the sum of the individual digits in a given integer value
*/

#include <stdio.h>

int main() {
	
	int val, sum, temp;
	
	sum = 0;
	
	printf("enter number: ");
	scanf("%d", &val);
	
	temp = val;
	
	while(temp > 0) {
		sum += (temp % 10);
		temp /= 10;
	}
	
	printf("the sum of the individual digits of %d is %d", val, sum);
	
	return 0;
}
