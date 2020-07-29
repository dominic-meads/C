#include <stdio.h>




void right_shift_one(int * array, int size);
void print_array(int * array, int size);


int main()
{
    int my_array[8] = {1,0,0,0,0,0,0,0};
    int my_size = sizeof(my_array)/sizeof(my_array[0]); 
    
    right_shift_one(my_array, my_size);
    
    print_array(my_array, my_size);
    
    return 0;
}


void right_shift_one(int * array, int size)
{
    for(int i = 1; i < size; i++){
        array[i] = array[i-1];  // shift one to right (>>)
    }
    
    array[0] = 0;  // shift in a zero
}


void print_array(int * array, int size)
{
    for(int ii = 0; ii < size; ii++)
    {
        printf("%d",array[ii]);
    }
}
