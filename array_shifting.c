/******************************************************************************

creates a non-circular (shifts in zeros) right shift of elements in an array by one index

*******************************************************************************/
#include <stdio.h>


// function declarations
void right_shift_one(int * array, int * array_copy, int size);
void copy_array(int * array, int * array_copy, int size);
void print_array(int * array, int size);



int main()
{
    int my_array[8] = {0,0,1,1,0,0,0,0};
    int my_size = sizeof(my_array)/sizeof(my_array[0]); 
    
    int my_array_copy[8] = {};
    
    copy_array(my_array, my_array_copy, my_size);
    print_array(my_array_copy, my_size);
    printf(" right shifted one = ");
    
    right_shift_one(my_array, my_array_copy, my_size);
    print_array(my_array, my_size);
    
    return 0;
}



// function definitions
void right_shift_one(int * array, int * array_copy, int size)
{
    for(int i = 1; i < size; i++)
    {
        array[i] = array_copy[i-1];  // shift one to right (>>)
    }
    
    array[0] = 0;  // shift in a zero
}


void copy_array(int * array, int * array_copy, int size)
{
    for(int k = 0; k < size; k++)  
    {
        array_copy[k] = array[k];
    }
}


void print_array(int * array, int size)
{
    for(int ii = 0; ii < size; ii++)
    {
        printf("%d",array[ii]);
    }
}
