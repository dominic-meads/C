// Just a quick messaround sketch printing and reading to files to help me get better at C

#include <stdio.h>
#include <math.h>    // for rand()
#include <stdlib.h>  // for files



int main()
{
    float my_array[8] = {};
    float max = 2147483647;  // RAND_MAX
    float read_array[8] = {};  // to put the read values into.
    
    FILE * fp; 
    
    fp = fopen("MyRandomNumbers.txt","w+");  // open/create file (w+ means write or read)
    
    for(int i = 0; i < 8; i++)
    {
        my_array[i] = rand() / max;  // create normalized random number
        fprintf(fp,"%f\n",my_array[i]);  // print a random number to the file
    }
    
    rewind(fp);  // reset position to beginning of file 
    
    for(int i = 0; i < 8; i++)
    {
        fscanf(fp,"%f", &read_array[i]);  // read each line of file and store in array
        printf("line %d of the file holds the number %f\n", i, read_array[i]);  // print the values 
    }
    
    
    fclose(fp);  // close file
    
    return 0;
}
