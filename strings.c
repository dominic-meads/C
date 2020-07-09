/******************************************************************************

practice with strings

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[8] = "DOMINIC";  // add one to length for termination at end of string
    printf("%s\n",name);
    
    int L = strlen(name);
    printf("%d\n",L);
    
    // reverse the string
    for(int i = strlen(name); i >= 0; i--)
    {
        printf("%c",name[i]);
    }
    printf("\n");
    
    // string concatenation (can add two strings together) 
    char str1[20] = "hello";  // add extra indecies for str 2
    char str2[7] = " world";  // included space at beginning
    
    strncat(str1,str2,6);  // add first 6 chars of str2 to str1
    
    printf("%s\n",str1);
    

    return 0;
}
