// scientific notation only for positove numbers

#include <stdio.h>


int main()
{
    double my_num;  // holds entered number
    double temp_num = my_num;  // holds temp number during while loop
    int tens = 0;  // for exponent
    
    char my_string[12] = {};  /* holds scientific notation form of (+-)x.xxxxxxx *10^(+-)xx
                                 for sign: 1 = +, 0 = - (max decimal length 7)*/
    printf("enter your number: ");
    scanf("%f", my_num);
    printf("\nyour number in scientific notation is ");
    
    if (my_num > 0)
    {
        while(temp_num > 10)
        {
            temp_num = temp_num / 10;  // divide by 10
            tens++;  // increment the number of divisions of 10 for exponent
        }  // end while
    }  // end if(my_num ...
    
    else if (my_num < 0)
    {
        while(temp_num < 10)
        {
            temp_num = temp_num * 10;  // divide by 10
            tens++;  // increment the number of divisions of 10 for exponent
        }  // end while
    }
    
    else if(my_num == 0)
    {
        printf("0");
    }  // end else if(my_num == 0)
    
    return 0;
}
