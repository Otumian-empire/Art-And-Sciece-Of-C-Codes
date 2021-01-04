/*
fibseriesfromfxtofy.c
a  program  to  display  the  values  in  this  sequence  from  Fx  through  Fy.
fx and fy are the starting and ending terms of the series resoectively
to modify this program, change the value of fx and fy
*/

#include <stdio.h>

// fx and fy
#define fx 2
#define fy 50

int main()
{
	long a, b, fib;
	a = 0;
	b = 1;
	fib = 0;

	printf("start\n");

	printf("fib(0): %5ld\n", a);
	printf("fib(1): %5ld\n", b);

	for (int i = fx; i <= fy; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("fib(%d): %5ld\n", i, fib);
	}

	printf("end\n");
	return 0;
}
