// Online C compiler to run C program online
#include <stdio.h>

void birthday(char name[], int age) {
    printf("Happy birthday \n");
    printf("Happy birthday %s \n", name);
    printf("You are %d years old \n", age);
}

int main() {
    int age = 20;
    char name[] = "hamza";

    birthday(name, age);


    return 0;
}