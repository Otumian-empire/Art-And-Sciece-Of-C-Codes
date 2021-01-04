/*
kilogramtopoundstoounce
a  program  that  converts  a  metric  weight  in  kilograms
to  the  corresponding English weight  in pounds and ounces.
The conversion factors  you need are   
  1 kilogram  =  2.2 pounds
  1 pound =  16 ounces
*/

#include <stdio.h>

int main()
{
	float kilo, pounds, ounces;

	printf("enter weight in kilograms: ");
	scanf("%f", &kilo);

	pounds = kilo * 2.2;
	ounces = pounds * 16;

	printf("%5.2fkilograms = %5.2fpounds\n%5.2fpounds = %5.2founcee\n",
		   kilo, pounds, pounds, ounces);

	return 0;
}
