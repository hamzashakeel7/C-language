#include <stdio.h>
#include <ctype.h>


int main() {
    char unit;
    float temp;

    printf("\n Is the temp in C or F: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C') {
        printf("Enter your current temp in C: ");
        scanf("%f", &temp);
        temp = (9 / 5 * temp) + 32;
        printf("Your temp in F is %.1f F", temp);
    }
    else if(unit == 'F') {
        printf("Enter your current temp in F: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5/9;
        printf("Your temp in C is %.1f C", temp);
    }
    else {
        printf("Enter a valid temp unit");
    }

    return 0;
}