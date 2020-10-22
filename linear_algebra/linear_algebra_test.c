
#include <stdio.h>
#include "linear_alg.h"

int main()
{
    
    vector vector1;
    vector1.x = 5;
    vector1.y = 5;
    vector1.z = 3;
    
    vector vector1_unit = unit_vect(vector1);
    
    double mag1 = mag(vector1);
    
    printf("(%f,%f,%f)",vector1_unit.x,vector1_unit.y,vector1_unit.z);
    
    return 0;
}

