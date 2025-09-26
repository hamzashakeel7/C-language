#include <stdio.h>

int main () {
    float pi = 3.14;
    char grade = 'A'; 
    int age;

    printf("hello world \n");
    printf("pi value is %f \n", pi);
    printf("grade is %c \n", grade);
    printf("enter your age: ");
    scanf("%d", &age); // taking input
    printf("age is %d", age);


    return 0;
}