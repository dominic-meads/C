#include <math.h>

typedef struct vector
{
    double x, y, z;
} vector;


double mag(vector vect)
{
    double magnitude;
    
    vect.x = vect.x * vect.x;
    vect.y = vect.y * vect.y;
    vect.z = vect.z * vect.z;
    
    return magnitude = sqrt(vect.x + vect.y + vect.z);
}
