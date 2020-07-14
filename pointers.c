/******************************************************************************

pointers (a memory address that POINTS to a variable)

*******************************************************************************/
#include <stdio.h>


void add_two(int *array, int size);

int main()
{
    char * name = "John";  /* "name" is a stack variable, or a pointer to a single character, the rest of the characters follow.
                              Think like a stack of registers, where "J" is the first (top), followed by "h","o","n","\0"
                              therefore the pointer points to a larger amount of memory */

    // arrays are actually pointers (makes sense when you think about the variables like a stack of RAM)
    int my_array[5] = {2,2,2,2,2};
    int my_size = sizeof(my_array) / sizeof(my_array[0]);
    
    add_two(my_array,my_size);
    
    for(int i = 0; i < my_size; i++)
    {
        printf("%d ",my_array[i]);
    }
    
    return 0;
}

void add_two(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        array[i] += 2;
    }  // dont need to return anything because array is still stored in memory
}
