/*
randnumgen1.c 
created on Thursday, 2019, 11 July
By Otumian
*/

/*
A program that generate a random number every 1 second
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * function: 
 * usesage: unsigned int i = randomize();
*/
unsigned int randomize();

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("rand num %u\n", randomize());

        // to really see how this random numbers are generated, we insert an elapse
        // without the line below, it will seem that there is not randomness unless rerun
        sleep(1);
    }

    return 0;
}

/**
 * Just just the code in randnumgen0.c
 * but this time there is non-deterministic results
 * it generates a random number based on the system time
 * we passed NULL as an arg to time
*/
unsigned int randomize()
{
    // seeding rand() with time
    srand((int)time(NULL));

    return rand();
}
