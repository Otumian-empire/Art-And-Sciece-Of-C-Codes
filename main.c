#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Memory Management
    /* Understanding memory is an important aspect of C programming. 
    When you declare a variable using a basic data type, C automatically 
    allocates space for the variable in an area of memory called the stack. */

    // 4byte for int
    /* int x;
    printf("Sizeof int: %ld bytes\n", sizeof(x)); */
    // allocated contiguous blocks of memory
    /* int arr[10];
    printf("Sizeof arr: %ld bytes\n", sizeof(arr)); */

    /* Dynamic memory allocation is the process of allocating and freeing memory 
    as needed. Now you can prompt at runtime for the number of array elements and
     then create an array with that many elements. Dynamic memory is managed with 
     pointers that point to newly allocated blocks of memory in an area called the heap. */

    /* Stack --> Memory Allocated during Compile Time 
    Heap --> Memory Allocated During run Time. 

    Only difference is, If we know exact size of the variable , then it can be a stack, 
    else it should be a heap.

    Char name[2]={'a','b'}; --> stack, since we know the size
    char name[]; --> Heap Allocation, since we don't know the size  */

    /* Memory Management Functions

    The stdlib.h library includes memory management functions.
    The statement #include <stdlib.h> at the top of your program gives you access to the following:

    malloc(bytes) Returns a pointer to a contiguous block of memory that is of size bytes.

    calloc(num_items, item_size) Returns a pointer to a contiguous block of memory that has num_items items, each of size item_size bytes. Typically used for arrays, structures, and other derived data types. The allocated memory is initialized to 0.

    realloc(ptr, bytes) Resizes the memory pointed to by ptr to size bytes. The newly allocated memory is not initialized.

    free(ptr) Releases the block of memory pointed to by ptr.  */

    // malloc -> returns a void pointer so need to cast to the required type
    int *ptr;

    ptr = malloc(sizeof(*ptr) * 10);

    if (ptr != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            ptr[i] = i * 2;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }

    // free((void *)ptr);
    free(ptr);

    return 0;
}