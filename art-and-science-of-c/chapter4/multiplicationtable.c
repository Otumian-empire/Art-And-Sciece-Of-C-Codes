/*
multiplicationtable.c
a program that displays the multiplication table in X rows and Y columns
*/

#include <stdio.h>

#define rows 12
#define columns 12

int main() {
	
	for (int x = 1; x <= rows; x++) {	
		for (int y = 1; y <= columns; y++) {
			printf("%3d ", y * x);
		}
		printf("\n");
	}
	
	return 0;
}
