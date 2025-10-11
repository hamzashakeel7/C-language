// Online C compiler to run C program online
#include <stdio.h>

double square(double x){
    double result = x * x;
    return result;
}

int main() {
    double x = square(3);
    
    printf("%lf", x);

    return 0;
}