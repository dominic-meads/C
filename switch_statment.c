/******************************************************************************

switch statments in C. Very similar to a case statment in Verilog. Use break statments inbetween switches

*******************************************************************************/
#include <stdio.h>

int main()
{
    int pokemon;
    printf("enter the amount of pokemon you have: \n");
    scanf("%d",&pokemon);
    
    switch(pokemon)
    {
        case 0: 
            printf("Awe, you should start collecting!");
            break;
        case 1: 
            printf("Congrats on your first pokemon!");
            break;
        case 2: 
            printf("Nice! Keep collecting!");
            break;
        case 3: 
            printf("Wow! You're becoming a poke-nerd haha");
            break;
        case 4:
            printf("You've definitaley got your hands full!");
            break;
        default:  // if over 4
            printf("The pokemon gods are proud :)");
            break;
    }

    return 0;
}
