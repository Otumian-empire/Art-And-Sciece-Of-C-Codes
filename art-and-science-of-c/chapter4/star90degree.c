/*
star90degree.c
a  program  to  display  the  following  diagram  on  the  screen.
*
**
***
****
*****
....
*n
*/

#include <stdio.h>

#define terminate 8

int main() {
	
	for (int i = 1; i <= terminate; i++) {
		
		for (int x = 0; x < i; x++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
