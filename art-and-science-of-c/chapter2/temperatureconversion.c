/*
temperaturreconversion.c
a  program  that  reads  in  a  temperature  in  degrees  Fahrenheit
and  returns the corresponding temperature in degrees  Celsius.
The conversion formula is C = 5/9 (F - 32)
*/

#include <stdio.h>

int main() {
	float degCelcius, degFahrenheit;
	
	printf("enter temperature in degree Fahrenheit: ");
	scanf("%f", &degFahrenheit);
	
	degCelcius = 5 * (degFahrenheit - 32) / 9;
	
	printf("The corresponding equivalence in degree Celsius is, %.2f", degCelcius);
	
	
	return 0;
}
