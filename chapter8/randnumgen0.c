/*
randnumgen0.c 
created on Sunday, 2019, 07 July
By Otumian
*/

/* A random number generator */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Using the rand(), we get a deterministic value
    And to confirm that it's output is deterministic, we use a forloop
    just to create a couple of lines */

    size_t random_number = rand();

    size_t i = 0;

    for (i; i < 5; i++)
    {
        printf("The randon number generated is %lu\n", random_number);
    }

    /* We'd try another approach
    here we add the rand() in to the printf function directly */

    /* What we did wrong?
    We assigned a value from rand() to random_number and we kept calling it
    We explains why the outcome were the same */

    i = 0;

    for (i; i < 5; i++)
    {
        printf("The randon number generated is %u\n", rand());
    }

    /* The above approach rather generated some random numbers
    Obviously, the rand should be called everytime it is needed
    But there is also another problem which is that rand() 
    always generate the same values
    run cointosssimulation.c about 2 or 3 times to verify our claim */

    return 0;
}
