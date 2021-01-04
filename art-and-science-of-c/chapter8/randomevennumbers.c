/*
randomevennumbers.c 
created on Thursday, 2019, 11 July
By Otumian
*/

/* a program that displays a random even number between 2 and 100. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generates an even random number between a give range
 * function: unsigned int rand_even_numbers(unsigned int lower, unsigned int higher);
 * name: unsigned int rand_even_numbers
 * param: unsigned int lower and unsigned int higher, range
 * usage: unsigned int i = rand_even_numbers(unsigned int lower, unsigned int higher);
 * * printf("random even number %u\n", rand_even_numbers(0, 10));
*/
unsigned int rand_even_numbers(unsigned int lower, unsigned int higher);

/**
 * generates an even random number between a give range
 * function: unsigned int rand_even_numbers(unsigned int lower, unsigned int higher);
 * name: unsigned int rand_even_numbers
 * param: unsigned int lower and unsigned int higher, range
 * usage: unsigned int i = srand_even_numbers(unsigned int lower, unsigned int higher);
 * * printf("random even number %u\n", srand_even_numbers(0, 10));
*/
unsigned int srand_even_numbers(unsigned int lower, unsigned int higher);

int main()
{

    return 0;
}

// , based on srand and using the sys time as seed