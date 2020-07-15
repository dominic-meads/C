/******************************************************************************

structures

*******************************************************************************/
#include <stdio.h>


typedef struct  // structs can group variables together to be accessed by a single "struct" variable
{
    char *name;
    float rating;  // out of 5 stars
} movie;

struct my_vector // defines a 3d point
{
    int x;
    int y;
    int z;
};  

void add_two(struct my_vector *vector);


int main()
{
    movie batman;  // declare struct instance
    
    batman.name = "The Dark Night";  // use "nameofstruct.variablename" to assign values to variable
    batman.rating = 4.5;
    
   printf("I give the move %s a rating of %.1f stars.\n\n", batman.name, batman.rating);
   
   struct my_vector vector;
   vector.x = 1;
   vector.y = 1;
   vector.z = 1;
   
   add_two(&vector);  // pass the address of the struct to a function by reference
   
   printf("the new vector is [%d, %d, %d]",vector.x,vector.y,vector.z);
   
   return 0;
}

void add_two(struct my_vector *vector)
{
    vector -> x += 2;  // need to use "->" because it is a pointer
    vector -> y += 2;
    vector -> z += 2;
}
