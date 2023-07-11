/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Actual Parameter and Formal Parameters in C Functions. 
 * 
 * July 11, 2023
*/

#include<stdio.h>

/* Function Prototypes */
void greetings();
int wallet(int cash);

/* Main Function */
int main() {
    int i, cash, cost;
    greetings();
    
    do{
        printf("** Here is our menu ** \n");
        printf("[1] Onigiri \n");
        printf("[2] Sashimi \n");
        printf("[3] Update your wallet \n");
        printf("[4] Check your wallet \n");
        printf("[5] Exit \n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
            printf("You bought Onigiri! Enjoy \n");
            cost = 100;
            cash = wallet(cash) - cost;
            break;
        case 2:
            printf("You bought Sashimi! Enjoy \n");
            cost = 120;
            cash = wallet(cash) - cost;
            break;
        case 3:
            printf("How much is your cash?: \n");
            scanf("%d", &cash);
            wallet(cash);
            break;
        case 4: 
            printf("Your current balance is %d \n", wallet(cash));
            break;
        case 5:
            printf("** Arigatou Gozaimasu! Come again **\n");
            return 0;
        default:
            printf("Gomenasai (Sorry) this is out of the choices! \n");
            break;
        }
    }while(i!=5);
}

void greetings(){
    printf("Irasshaimase! What can I do for you?\n");
}

int wallet(int cash){
    int balance = 0;
    balance = balance + cash;
    return balance;
}