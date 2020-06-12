/******************************************************************************

convolution machine for the impulse respone {0, -.25, -.5, -.75, -.75, -.5, -.25, 0}

input function is sin(2*pi*t)+sin(2*pi*15*t)

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main(){
    
    float timestep;
    float pi = 3.14159;
    float lut1[32];
    int i, ii, iii, iiii;
    
    float n0;
    float n1;
    float n2;
    float n3;
    float n4;
    float n5;
    float n6;
    float n7;

    float h[8] = {0, -.25, -.5, -.75, -.75, -.5, -.25, 0}; // impluse response
    
    // these for convolution machine
    float lut2[46] = {0}; //zero this array (pad 7 zeros on both high and low side)
    float conv[39]; // for answer
    
    for(i = 0; i < 32; i++){        // this loop generates the waveform being sampled
        
        timestep = i/3.1;
        
        lut1[i] = sin(0.2*pi*timestep) + sin(0.2*pi*15*timestep);
        printf("timestep = %f\n", timestep);
        printf("lut element %d is %f\n", i, lut1[i]);
        
    }
    
    for(ii = 7; ii < 39; ii++){  // assigns lut 1 to another lut with padded zeros
        
        lut2[ii] = lut1[ii-7];
        printf("lut2 element %d is %f\n", ii, lut2[ii]);
        
    }
    
    for(iii = 7; iii < 46; iii++){ // convolution starts at x[n] which is x[0], in lut2 x[0+7] = x[7]
        
        n0 = lut2[iii] * h[0];
        n1 = lut2[iii-1] * h[1];
        n2 = lut2[iii-2] * h[2];
        n3 = lut2[iii-3] * h[3];
        n4 = lut2[iii-4] * h[4];
        n5 = lut2[iii-5] * h[5];
        n6 = lut2[iii-6] * h[6];
        n7 = lut2[iii-7] * h[7];
        
        conv[iii-7] = n0 + n1 + n1 + n3 + n4 + n5 + n6 + n7;
    }
    
    printf("the convolution is: ");
    
    for(iiii = 0; iiii < 40; iiii++){
        
        printf("%f ", conv[iiii]);
        
    }

    return 0;
}
