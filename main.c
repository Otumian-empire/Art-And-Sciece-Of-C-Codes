// Learn the basics of C programming

// we can start with #include "stdio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* struct Human
{
    char *fullName;
    int dateOfBirth;
};

void print(struct Human human)
{
    printf("Full name: %s, Date birth: %d\n", human.fullName, human.dateOfBirth);
}; */

/* void sayHello();
char *greetSomeOne(char *someOne);
void anotherGreetSomeOne(char *output, char *someOne);
 */
int main(int argc, char const *argv[])
{

    // 1. Variables and data types
    /* char grade = 'A';
    int numberOfLines = 1000;
    float weightOfAnAtom = 4E-10;// 4x10^-10
    double someHugeDecimalValue = 3.142; */

    // 2. Control structures
    /* for (int i = 0; i < 10; i++)
    {
        printf("Looping %d\n", i);
    } */

    // 3. Functions and procedures
    /* sayHello();
    char *name = "Daniel Leno";
    char *someGreetingsToSomeOne = greetSomeOne(name);
    printf("%s\n", someGreetingsToSomeOne);
    char output[50];
    anotherGreetSomeOne(output, "daniel ampah");
    printf("%s\n", output); */

    // 4. Arrays and collections
    /* int evenNumbers[10]; // an array 10 even numbers
    int oddNumbers[3] = {1, 3, 5};
    int primeNumbers[] = {1, 2, 3, 5};

    evenNumbers[0] = primeNumbers[1];
    // we pass 2 from primeNumbers to evenNumber
    // the 2nd element of primeNumber as the 1st element of evenNumber
    int matrix[3][3]; // a 2D 3by3 matrix
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 1;
    matrix[1][1] = 2;
    matrix[1][2] = 3;
    matrix[2][0] = 1;
    matrix[2][1] = 2;
    matrix[2][2] = 3; */

    // struct
    /* struct Human jeff, john;
    jeff.dateOfBirth = 2020;
    jeff.fullName = "Jeffery";

    // printf("Full name: %s, Date birth: %d\n", jeff.fullName, jeff.dateOfBirth);
    print(jeff); */

    // 5. Pointers and memory management
    /* int age = 0, CURRENT_YEAR = 2024;
    printf("Enter your age to get your date of birth: ");
    scanf("%d", &age);
    printf("Your date of birth is %d\n", CURRENT_YEAR - age); */

    /* int *p;
    int c = 10;
    p = &c;
    printf("The value p is pointing to is %p which is the address of c\n", p);
    printf("The value in c, that p is pointing to is %d\n", *p);
    printf("The address of p is %p\n", &p); */

    // 6. Input and output

    // 7. Error handling

    return 0;
}

// 3. Functions and procedures
/* void sayHello()
{
    printf("Hello there!!\n");
} */

/* char *greetSomeOne(char *someOne)
{
    char *greetings = malloc(strlen(someOne) + 13);
    sprintf(greetings, "Hello there, %s", someOne);
    return greetings;
} */

/* void anotherGreetSomeOne(char *output, char *someOne)
{
    //  char *output = malloc(strlen(someOne) + 13);
    sprintf(output, "Hello there, %s", someOne);
    // return output;
} */