#include <stdio.h>

int main() {
   int a = 20;
   int *ptrA = &a;

   printf("A address is: %p\n", ptrA);
   printf("ptrA address is: %p\n", &ptrA);
   printf("ptrA value is: %d\n", *ptrA);


    return 0;
}


