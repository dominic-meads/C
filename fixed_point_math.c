/******************************************************************************

Program from https://www.embedded.com/fixed-point-math-in-c/
Showing how to do fixed point math in c

*******************************************************************************/

#include <stdio.h>

/* First, determine the number of bits you need to store the whole number part,
   the find the number of bits required for the amount of granularity (precision)
   
   ex. Initilaize fixed point number on interval [0,100] with a granularity of 0.1
 
        1). Find maximum absolute value "M" of your number
                M = abs(100) = 100
                
        2). Find number of bits needed to represent M (2^x >= M >= 2^x-1)
                log2(100) = 6.644
                2^x >= 100 >= 2^6
                2^7 >= 100 >= 2^6  (6.644 is inbetween 6 and 7)
                x = 7 bits needed to represent whole number part
                
        3). If the number is signed, add 1 to x
                not signed, x = 7
                
        4). Determine number of bits for granularity "G" (1/2^y <= G <= 1/2^y-1)
                -log2(0.1) = 3.32
                1/2^y <= 0.1 <= 1/2^3
                1/2^4 <= 0.1 <= 1/2^3  (3.32 is inbetween 3 and 4)
                y = 4 bits needed to represent fractional part
                
        5). Minimum number of bits is x+y, then round up to 8, 16, or 32.
            The sum of x+y is referred to as "FULLSIZEINT"
                FULLSIZEINT = 7 + 4 = 11 -> round -> 16 bits minimum
        
        6). "Definition of the fixed-point algorithm requires a typedef for each fixed-point 
            variable type that will be used" 
    
                typedef union FIXEDX_Ytag {
                    FULLSIZEINT full;
                    struct partX_Ytag {
                        FULLSIZEINT fraction: x;
                        FULLSIZEINT integer:
                            FULLSIZEINT-x;
                    } part;
                } FIXEDX_Y;
    
               if the machine is big endian, REVERSE declaration of "fraction" and "integer"
               within the struct 
        
        7). Lastly, define macros. 
                #define FIXEDX_YCONST(A,B) (FULLSIZEINT)((A<<X) + ((B + G/2)*2^x))  
                    "These values (A and B) must be hard-coded constants so the preprocessor and compiler 
                    can completely resolve the macro into an integer." "Hard-coded" means embedding into 
                    the program, not determining it from user-input, other IO, or generating it at runtime
                
                #define MULTX_Y(A,B)(FULLSIZEINT+1)(A.full*B.full+2^(Y-1))>>Y
                
                #define DIVX_Y(A,B)(FULLSIZEINT+1)(((A.full<<(Y+1))/B.full)+1)/2
                    "where FULLSIZEINT+1 is the next largest integer over X+Y . If FULLSIZEINT is the 
                    largest available integer, then either floating point must be used"
*/

int main()
{
    printf("Hello World");

    return 0;
}

