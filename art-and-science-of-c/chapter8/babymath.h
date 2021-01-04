/**
 * By Otumian
 * file: babymath.h
 * Description: This file functions for basic arithmetic operations
 * created on Tuesday, 2019, 09 July
 * 
*/
#ifndef _babymath_h
#define _babymath_h

/**
 * function: add
 * usage: n = add(x, y)
 * add takes in 2 unsigned int values and returns an unsigned int
 * this function computes the sum of x and y
 */
unsigned int add(unsigned int x, unsigned int y);

/**
 * function: sub
 * usage: n = sub(x, y)
 * add takes in 2 unsigned int values and returns an int
 * this function computes the difference of x and y
 */
int sub(unsigned int x, unsigned int y);

/**
 * function: mul
 * usage: n = mul(x, y)
 * add takes in 2 unsigned int values and returns an unsigned int
 * this function computes the product of x and y
 */
unsigned int mul(unsigned int x, unsigned int y);

/**
 * function: div
 * usage: n = div(x, y)
 * add takes in 2 unsigned int values and returns an unsigned int
 * this function computes the ratio of x and y
 */
unsigned int div(unsigned int x, unsigned int y);

/**
 * function: mod
 * usage: n = mod(x, y)
 * add takes in 2 unsigned int values and returns an unsigned int
 * this function computes the remainder of x divided y
 */
unsigned int mod(unsigned int x, unsigned int y);

/**
 * function: expo
 * usage: n = expo(x, y)
 * add takes in 2 unsigned int values and returns an unsigned int
 * this function computes the exponent of x to the power y
 */
unsigned int expo(unsigned int x, unsigned int y);

#endif
