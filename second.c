#include <stdio.h>
#include <stdbool.h>   //to use booleans

int main () {
   char name[] = "webwiz"; // array of characters
    int age = 20;
    bool e = true;
    char f = 120;

    printf("Hamza is %d years old \n", age);
    printf("%s is good \n", name); //%s is used for calling the array variable
    printf("The answer is %d \n", e);
    printf("The character in asci table is %c", f);   //this prints the ascii code
     

   return 0;
};