#include <stdio.h>

int main() {

    char name[25]; // 25 bytes

    printf("Enter Your name: ");
    // scanf("%s", &name);   This stops if there is any whitespace
    fgets(name, 25, stdin);

    printf("Hello %s, How are you", name);

    return 0;
};