/*
startriangle.c
a  program  to  display  the  following  diagram  on  the  screen.
   *
  ***
 *****
*******
*n
*/

#include <stdio.h>

#define terminate 20

int main() {
	
	for (int i = 1; i <= terminate; i += 2) {
		for (int y = terminate; y > i; y -= 2) {
			printf(" ");
		}
		
		for (int x = 0; x < i; x++) {
			printf("*");
		}
			
		printf("\n");
		
	}
	
	return 0;
}
