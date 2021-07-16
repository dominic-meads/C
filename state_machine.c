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
                        printf("first user input is %c\n",user_input);
                        if(user_input == 'a'){
                            printf("transition to state_2\n");
                            STATE = state_2;
                            scanf("%c", &user_input);
                        }
                        else{
                            printf("staying in state_1\n");
                            STATE = state_1;
                        }
        case state_2:   
                        printf("2nd user input is %c\n",user_input);
                        if(user_input == 'b'){
                            printf("transition to state_3\n");
                            STATE = state_3;
                        }
                        else{
                            printf("staying in state_2\n");
                            STATE = state_2;
                        }
        case state_3: 
                        scanf("%c", &user_input);
                        printf("3rd user input is %c\n",user_input);
                        if(user_input == 'c'){
                            printf("you entered the correct sequence!\n");
                            STATE = state_3;
                        }
                        else{
                            printf("staying in state_3\n");
                            STATE = state_3;
                        }

    }
    
    

    return 0;
}
