/*
babymathtest.c 
created on Tuesday, 2019, 09 July
By Otumian
*/

/* 
This is a test of the baby math interface
*/
#include <stdio.h>
#include "babymath.h"

int main()
{
    unsigned int x, y;
    x = 23;
    y = 12;

    int p = 23, q = 12;

    int a = 5, b = 2;

    // add
    printf("The sum of %u and %u is %u\n", x, y, add(x, y));

    // sub
    printf("The difference between %u and %u is %u\n", p, q, sub(p, q));

    // mul
    printf("The product of %u and %u is %u\n", x, y, mul(x, y));

    // div
    printf("The quotient of %u over %u is %u\n", x, y, div(x, y));

    // mod
    printf("The fractional part of %u when divided %u is %u\n", x, y, add(x, y));

    // expo
    printf("The exponet of %d, raised to the power %d is %d", a, b, expo(a, b));

    return 0;
}
