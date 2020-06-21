//taken from https://www.geeksforgeeks.org/bubble-sort/


#include <stdio.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

int main()
{
    int arr[5] = {5,1,4,2,8};
    int length = sizeof(arr)/sizeof(arr[0]);  /* C has no length function like MATLAB, but if you take the total size (bytes),
                                                       and divide by the size of a single element, you can get the amount of elements
                                                       in the array, which is the length */
    int i, j; 
    for (i = 0; i < length-1; i++)       
  
        // Last i elements are already in place    
        for (j = 0; j < length-i-1; j++)  
            if (arr[j] > arr[j+1]) 
                swap(&arr[j], &arr[j+1]); 
    
    for(int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
     return 0;
}
