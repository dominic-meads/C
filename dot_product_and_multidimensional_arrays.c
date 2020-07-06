/******************************************************************************
Dot product calculator
Dominic Meads

*******************************************************************************/
#include <stdio.h>

int main()
{
    int my_matrix1[3][3] = {  // first matrix to dot
        {3,12,4},
        {5,6,8},
        {1,0,2}
    };
    
    int my_matrix2[3][3] = {  // second matrix to dot
        {7,3,8},
        {11,9,5},
        {6,8,4}
    };
    
    int dot_matrix[3][3] = {};  // final matrix to hold dot prodct
    
    // calculate dot product
    for(int i = 0; i < 3; i++)  // rows
    {  
        for(int j = 0; j < 3; j++)  // columns
        {  
            dot_matrix[i][j] = my_matrix1[i][1] * my_matrix2[1][j] + my_matrix1[i][2] * my_matrix2[2][j] + my_matrix1[i][3] * my_matrix2[3][j];
        }  // end for(j)
    }  // end for (i)
    
    // print result
    printf("the dot product is:\n");
    // row 1
    printf("%d ",dot_matrix[1][1]);
    printf("%d ",dot_matrix[1][2]);
    printf("%d\n",dot_matrix[1][3]);
    // row 2
    printf("%d ",dot_matrix[2][1]);
    printf("%d ",dot_matrix[2][2]);
    printf("%d\n",dot_matrix[2][3]);
    // row 3
    printf("%d ",dot_matrix[3][1]);
    printf("%d ",dot_matrix[3][2]);
    printf("%d\n",dot_matrix[3][3]);
    
    /* answer should be 
    
    | 177 149 100 |
    | 149 133 102 |
    | 19  19  16  |  */ 
    
    return 0;
}
