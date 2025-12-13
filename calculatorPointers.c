#include <stdio.h>

void add(int num1, int num2);
void sub(int num1, int num2);
void multi(int num1, int num2);
void divide(int num1, int num2);

int main() {
    // This is the function pointer with arguments or parameters
    void (*operations[4])(int, int) = {add, sub, multi, divide};

    int choice, num1, num2;

    for(int i = 0; i<6; i++){
        printf("Enter your choice 1.. Add, 2.. Sub, 3.. Multiply, 4.. Divide: 5.. Exit: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <=4){
            printf("Enter 2 numbers: ");
            scanf("%d %d", &num1, &num2);

            // Calling the function pointer, passing the choice with two parameter values
            operations[choice - 1](num1, num2);
        }
        else if(choice == 5){
            printf("Exiting...");
            break;
        }
        else {
            printf("Invalid");
        }
    }

    return 0;
}

void add(int num1, int num2){
    printf("Add: %d\n", num1 + num2);
}
void sub(int num1, int num2){
    printf("Sub: %d\n", num1 - num2);
}
void multi(int num1, int num2){
    printf("Multiply: %d\n", num1 * num2);
}
void divide(int num1, int num2){
    printf("Divide: %d\n", num1 / num2);
}