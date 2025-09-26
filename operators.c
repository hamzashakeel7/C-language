#include <stdio.h>

int main () {

    int x = 5;
    int y = 2;

    // DIVISION
    float z = x / (float) y;   //telling variable y that it is a float, changing it

    // MODOLOUS %
    int zz = x % y;   // gives us the remainder of that number

    printf("Division is %.1f \n", z);   // %.1f only 1 precision
    printf("Modolous is %d \n", zz);

};