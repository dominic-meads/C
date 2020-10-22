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

vector unit_vect(vector vect)
{
    vector unit;
    double magnitude = mag(vect);
    
    unit.x = vect.x/magnitude;
    unit.y = vect.y/magnitude;
    unit.z = vect.z/magnitude;
    
    return unit;
}
