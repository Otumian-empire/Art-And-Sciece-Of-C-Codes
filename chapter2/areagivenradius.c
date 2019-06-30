/*
areagivenradius.c
a  program  that  asks  the  user  for  the  radius  of  a  circle
and  then  computers the area of  that  circle (A)  using the formula A =  PI*r*r
PI = 3.14159
*/

#include <stdio.h>

int main() {
	
	float A, r, PI;
	PI = 3.14159;
	
	printf("enter the radius of the circle: ");
	scanf("%f", &r);
	
	A = PI * r * r;
	
	printf("The area, A, of a circle of radius, %.4fcm is %.4fcm^2", r, A);
	
	
	return 0;
}
