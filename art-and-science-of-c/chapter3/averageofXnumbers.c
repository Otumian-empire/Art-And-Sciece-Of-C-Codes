/*
averageofXnumbers.c
a  program  that  reads  in  five  integers  from  the  user  
and  then  displays  their average
*/

#include <stdio.h>

#define intNum 5

int main()
{
	float temp, sumInt, averageInt;

	sumInt = 0;
	averageInt = 0;

	for (int i = 0; i < intNum; i++)
	{
		printf("enter nunber %d: ", i + 1);
		scanf("%f", &temp);
		sumInt += temp;
	}

	averageInt = sumInt / intNum;

	printf("the average of the five numbers is %.2f", averageInt);

	return 0;
}
