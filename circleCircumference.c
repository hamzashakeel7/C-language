#include <stdio.h>

int main() {

    const double PI = 3.1415;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference: %lf", circumference);
    printf("\nArea: %lf", area);


    return 0;
};