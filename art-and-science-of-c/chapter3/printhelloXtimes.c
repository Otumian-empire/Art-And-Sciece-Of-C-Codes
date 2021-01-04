/*
printhelloXtimes.c
a program  that  displays the message `Hello,  world.` 
X times  on separate lines. modify X to suit your requirements
*/

#include <stdio.h>
#define X 10

int main()
{
	char str[15] = "hello world\n";

	for (int i = 0; i < X; i++)
	{
		printf("%2d. %s", i + 1, str);
	}
	
	printf("\n");
	return 0;
}
