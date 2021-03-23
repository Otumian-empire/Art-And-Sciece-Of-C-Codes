#include <stdio.h>

int main(void) {
	int fah = 0, cel = 0;

	printf("enter temperature in degree fahrenheit: ");
	scanf("%d: ", &fah);

	for(;fah > 0;) {		
		cel = 5 *  (fah - 32) / 9;

		printf("%d deg fah = %d deg cel\n", fah, cel);
		fah--;
	}

	return 0;
}

