#include "babymath.h"

unsigned int add(unsigned int x, unsigned int y)
{
    return x + y;
}

int sub(unsigned int x, unsigned int y)
{
    return x - y;
}

unsigned int mul(unsigned int x, unsigned int y)
{
    return x * y;
}

unsigned int div(unsigned int x, unsigned int y)
{
    return x / y;
}

unsigned int mod(unsigned int x, unsigned int y)
{
    return x % y;
}

unsigned int expo(unsigned int x, unsigned int y)
{
    unsigned int product = 1;

    while (y > 0)
    {
        product *= x;

        y--;
    }

    return product;
}
