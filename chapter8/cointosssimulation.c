/*
cointosssimulation.c 
created on Sunday, 2019, 07 July
By Otumian
*/

/*
A coin toss simulation program based on the use of rand()
Though rand() generate pseudo-random numbers between 0 to RAND_MAX (INT_MAX)
There actually quite a smart way to do it
Any value than than half of RAND_MAX, HEAD else TAIL
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_RUNS 50

int main()
{
    size_t index = 0;
    unsigned int rand_val, half_RAND_MAX;
    char *side;

    half_RAND_MAX = RAND_MAX / 2;

    for (index; index < NUM_OF_RUNS; index++)
    {
        rand_val = rand();

        if (rand_val > half_RAND_MAX)
        {
            side = "HEAD";
        }
        else
        {
            side = "TAIL";
        }

        printf("Run %3lu was %5s\n", index, side);
    }

    return 0;
}
