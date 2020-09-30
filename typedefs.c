#include <stdio.h>

/* typedef statements are used for user defined data and can save writing time
   in this example, you can replace "struct point_3D" in the code with a typedef
   statement at the beginning, then just use "point_3D" in your code */
   
// good tutorial: https://www.youtube.com/watch?v=9guJVmDyFmE

  
typedef struct point_3D  
{
    int x,y,z;
} point_3D;

/*
struct point_3D  
{
    int x,y,z;
};
*/


int main()
{
    // struct point_3D A; 
    point_3D A;  // create a 3D point a
    A.x = 1;
    A.y = 2;
    A.z = 4;
    
    point_3D B; // easily create another 3D point by using "typedef"
    B.x = 3;
    B.y = 7;
    B.z = 9;
    
    printf("(%d, %d, %d) is the 3D point A\n", A.x, A.y, A.z);
    printf("(%d, %d, %d) is the 3D point B", B.x, B.y, B.z);
    
    return 0;
}
