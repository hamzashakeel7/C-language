#include <stdio.h>

int main() {
   int num, reverse, digit;
   
   reverse = 0;
   
   printf("Enter a 4 digit number: ");
   scanf("%d", &num);
   
   while(num != 0) {
       digit = num % 10; // num modolus 10, gives us the last digit as a reminder
       reverse = reverse * 10 + digit;
       num = num / 10;
   }
   
   printf("Reversed: %d", reverse);
    
    
    return 0;
}