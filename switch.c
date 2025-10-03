#include <stdio.h>

int main() {

    char grade; 

    printf("Enter your grade: ");
    scanf("%c", &grade);

    // we use break; after each case is so that we can exit out of our switch
    // otherwise it will print all the statements after taking input from user
    // Thats why break; is imp to exit the switch case.

    switch(grade) {
        case 'A':
            printf("A grade");
            break;
         case 'B':
            printf("B grade");
            break;
         case 'C':
            printf("C grade");
            break;
        case 'D':
            printf("D grade");
            break;
        default:
            printf("enter valid grade");
    }
    
    return 0;
}