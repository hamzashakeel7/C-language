// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int userDecision;
    float balance, withdraw, addCash;
    
    balance = 100.0;
    
    printf("----------------Welcome to durrani atm----------------------\n");
    printf("1. Check balance\n");
    printf("2. Widthdraw cash\n");
    printf("3. Add cash\n");
    printf("4. Exit\n");
    
    printf("Enter your decision: ");
    scanf("%d", &userDecision);
    
    switch(userDecision){
        case 1:
        printf("Your balance is %.2f", balance);
        break;
        
        case 2:
        printf("How much money you want ?");
        scanf("%f", &withdraw);
        if(withdraw > balance){
            printf("Your account is empty");
        }
        else{
            balance = balance - withdraw;
            printf("Your %.2f is successfully withdrawn", withdraw);
        }
        break;
        
        case 3:
        printf("How much cash you want to add: ");
        scanf("%f", &addCash);
        balance = balance + addCash;
        printf("Amount added. %.2f is your new balance", balance);
        break;
        
        case 4: 
        printf("Thankyou and bye bye");
        break;
        
        default:
        printf("Wrrong number");
    }
    
    
    return 0;
}