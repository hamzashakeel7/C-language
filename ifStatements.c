#include <stdio.h>

int main() {

    int age;

    printf("Enter you age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Lessgo");
    }
    else if(age == 0) {
        printf("You just born nigga");
    }
    else{
        printf("Bacha ho app");
    }

    return 0;
}