/*
squareofnumbersfromXtoY.c
a  program  that  prints  out  the  squares  of  the  numbers  
from  X  to  Y(inclusive). to change the initial value and the 
final value, make approximate changes to startIndex and endIndex
*/

#include <stdio.h>

#define startIndex -7
#define endIndex 10

int main()
{
	for (int i = startIndex; i <= endIndex; i++)
	{
		printf("%d squared is %d\n", i, i * i);
	}

	return 0;
}
