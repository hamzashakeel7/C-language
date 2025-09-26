#include <stdio.h>

// defines amd formats the type of data to be displayed

int main () {
    float item1 = 5.78;
    float item2 = 4.78;
    float item3 = 10.89;

    printf("The Item 1 is : $%.2f", item1);   // adding a %.2f says that i want two numbers after decimal
};