#include <stdio.h>

int main()
{
    int state_1 = 1;
    int state_2 = 2;
    int state_3 = 3;
    int STATE = 1;  // init to state_1
    
    char user_input;  // input from screen
    
    switch(STATE){
        case state_1 : 
                        scanf("%c", &user_input);
                        if(user_input = 'a'){
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
