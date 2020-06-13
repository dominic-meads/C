// Just a quick messaround sketch to help me get better at C

#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    float my_array[8] = {};
    float max = 2147483647;  // RAND_MAX
    
    FILE * fp; 
    
    fp = fopen("MyRandomNumbers.txt","w");  // open/create file
    
    for(int i = 0; i < 8; i++)
    {
        my_array[i] = rand() / max;  // create normalized random number
        fprintf(fp,"%f\n",my_array[i]);  // print a random number to the file
    }
    
    fclose(fp);  // close file

    return 0;
}
