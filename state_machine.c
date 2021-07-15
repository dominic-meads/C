#include <stdio.h>

#define state_1 1
#define state_2 2
#define state_3 3

// need to make a way to stay in state_1 if incorrect character is input

int main()
{

    int STATE = 1;  // init to state_1
    
    char user_input;  // input from screen
    
    switch(STATE){
        case state_1 : 
                        scanf("%c", &user_input);
                        printf("user input is %c\n",user_input);
                        if(user_input == 'a'){
                            printf("transition to state_2");
                            STATE = state_2;
                        }
                        else{
                            printf("state_1");
                            STATE = state_1;
                        }
                        break;
        case state_2: 
                        printf("state_2");
                        break;
    }
    
    

    return 0;
}
