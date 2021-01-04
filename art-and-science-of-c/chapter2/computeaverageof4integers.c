/*computeaverageof4integers.c
a program  that  computes  the average of  four  integers.
*/
#include <stdio.h>

int main()
{
	int averageint, sumint, inta, intb, intc, intd;

	printf("enter four integers: ");
	scanf("%d %d %d %d", &inta, &intb, &intc, &intd);

	sumint = inta + intb + intc + intd;
	averageint = sumint / 4;

	printf("The average of %d, %d, %d and %d, of sum %d is, %d\n",
		   inta, intb, intc, intd, sumint, averageint);

	return 0;
}
