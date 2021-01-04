/*
decimalloop.c
a program that displays decimal numbers from X to y
*/

#include <stdio.h>

#define START 10
#define END 20

int main() {
	
	for (int i = START; i <= END; i++) {
		printf("%3.1f\n",  i/10.0);
	}
	
	return 0;
}
