#include <stdio.h>
#include "linear_alg.h"

int main()
{
    
    vector vector1;
    vector1.x = 5;
    vector1.y = 5;
    vector1.z = 3;
    
    double mag1 = mag(vector1);
    
    printf("%f",mag1);
    
    return 0;
}
