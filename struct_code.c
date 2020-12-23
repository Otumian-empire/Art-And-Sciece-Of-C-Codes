#include <stdio.h>

// this is a simple creation and usage of strutures in C
struct dev
{
    char *firstname;
    char *lastname;
    char *job;
};

// using typedef
typedef struct
{
    char *firstname;
    char *lastname;
    char *job;

} thisdev;

int main(void)
{
    //struct dev mic;
    thisdev mic;

    mic.firstname = "Michael";
    mic.lastname = "Peter";
    mic.job = "Backend developer";

    printf("My name is %s %s and I a %s\n", mic.firstname, mic.lastname, mic.job);
    return 0;
}
