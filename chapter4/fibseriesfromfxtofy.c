/*
fibseriesfromfxtofy.c
a  program  to  display  the  values  in  this  sequence  from  Fx  through  Fy.
fx and fy are the starting and ending terms of the series resoectively
to modify this program, change the value of fx and fy
*/

#include <stdio.h>

// fx and fy
#define fx 2
#define fy 100

int main() {
	
	int a, b, fib;
	a = 0;
	b = 1;
	fib = 0;
	
	printf("start\n");
	
	printf("fib(0): %5d\n", a);
	printf("fib(1): %5d\n", b);
	
	for (int i = fx; i <= fy; i++) {
		fib = a + b;
		a = b;
		b = fib;
		printf("fib(%d): %5d\n", i, fib);
	}
	
	printf("end\n");
	return 0;
}
