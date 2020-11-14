#include <stdio.h>

#define PI_ 3.1432

int main(void)
{
    // hello world
    // printf("Hello world\n");

    // datatypes: int, float, double, char
    // datatypes vary from one platform to another - sifeof
    // printf("int - %ld\n", sizeof(int));
    // printf("float - %ld\n", sizeof(float));
    // printf("double - %ld\n", sizeof(double));
    // printf("char - %ld\n", sizeof(char));

    // format specifiers
    // %c, (%d, %i), (%f, %g), %p, %s

    // variables
    int number_of_cows = 120;
    float weight_of_avg_cow = 300; // kg
    float total_weight_of_cows = weight_of_avg_cow * number_of_cows;
    char grade = 'A';

    printf("An average cow weighs, %f and there are %d cows.\n", weight_of_avg_cow, number_of_cows);

    printf("Therefore there are a total of %f, in weight of cows\n", total_weight_of_cows);

    printf("All the cows are grade %c cows\n", grade);

    // constants using const and #define
    // use #define
    const float PI = 3.1432;
    float radius = 5.67;
    float area = radius * radius * PI;

    printf("A circcle of radius, %f, has an area of %f\n", radius, area);

    printf("This is the PI_ = %f\n", PI_);

    // The difference between const and #define is that const uses
    // memory for storage and #define does not.

    return 0;
}