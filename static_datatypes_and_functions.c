/******************************************************************************

practice with static datatypes and functions

*******************************************************************************/
#include <stdio.h>

static int count_decrease();  // intialize functions before main

int main()
{
    printf("%d",count_decrease());
    printf("%d",count_decrease());
    printf("%d",count_decrease());
    
    return 0;
}

static int count_decrease()  // define below main, static functions means can only be used within this file
{
    static int count = 5;  // static means it keeps the variable IN MEMORY even after the function terminates
    count--;
    
    return count;
}
