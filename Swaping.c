// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char x[20] = "water";
    char y[20] = "pepsi";
    char temp[20];
    
    // to assing in a string value we use strcpy
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
    
    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}