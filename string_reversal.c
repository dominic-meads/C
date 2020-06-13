/******************************************************************************

Practice reversing strings

*******************************************************************************/
#include <stdio.h>

int main()
{
    char my_string[12] = "hello world";
    
    for(int i = 11; i >= 0; i--)  // count down indecies to reverse string
    {
        printf("%c",my_string[i]);
    }
    
    return 0;
}
