/******************************************************************************

fixed point operations with two decimal places of precision

*******************************************************************************/
#include <stdio.h>
#include "header.h"  // use quotes when its not a standard C header file?

int main()
{
    int num1 = 2;
    int num2 = 3;
    
    int num3 = add(num1,num2);
    
    printf("%d",num3);

    return 0;
}
