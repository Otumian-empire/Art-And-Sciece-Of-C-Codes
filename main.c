#include <stdio.h>

int square(int x);
void say_hello();
int factorial(int i);

int main(void)
{
    // Functions are central to C programming and are used
    // to accomplish a program solution as a series of subtasks.

    // A function:
    // is a block of code that performs a specific task
    // is reusable
    // makes a program easier to test
    // can be modified without changing the calling program

    // int x;

    // printf("Enter a number: ");
    // scanf("%d", &x);

    // printf("The square of %d is %d\n", x, square(x));

    // A function's parameters are used to receive values required by the function.

    // Values are passed to these parameters as arguments through the function call.

    // By default, arguments are passed by value, which means that a copy of data
    // is given to the parameters of the called function. The actual variable isn't
    // passed into the function, so it won't change.
    // Variable scope refers to the visibility of variables within a program.
    // Variables declared in a function are local to that block of code and cannot
    //  be referred to outside the function.
    // Variables declared outside all functions are global to the entire program.

    // Static variables have a local scope but are not destroyed when a function is exited.
    // Therefore, a static variable retains its value for the life of the program and can be
    // accessed every time the function is re-entered.
    // A static variable is initialized when declared and requires the prefix static
    // int i;

    // for (i = 0; i < 5; i++)
    // {
    //     say_hello();
    // }

    // A recursive function is one that calls itself and includes a base case,
    // or exit condition, for ending the recursive calls.

    int i = 3;

    printf("%d factorial is %d\n", i, factorial(i));

    return 0;
}

void say_hello()
{
    static int num_calls = 1;

    printf("Hello number %d\n", num_calls);
    num_calls++;
}

int factorial(int i)
{
    if (i <= 1)
    {
        return 1;
    }
    else
    {
        return i * factorial(i - 1);
    }
}

int square(int x)
{
    return x * x;
}