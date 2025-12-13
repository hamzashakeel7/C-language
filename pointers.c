#include <stdio.h>

// declare the function
void birthday(int *pAge);

int main() {
    int age = 20;
    // & (and percent will give us the address of that variuable)
    int *pAge = &age;
    
    // This pAge is right now holding an address something like this 00000000005FFE6C
    birthday(pAge);

    printf("AGE: %d", age);

    return 0;
}
// *pAge in the parameter tells the function that this pAge variable is a pointer and has an address
void birthday(int *pAge){
    // dereference the value so that you get the value of age, pAge++ will only give address
    // pAge++; Thius will give us the address and increment in the address
    (*pAge)++;
    // this will dereference the pointer address, it will give us the value STORED IN THAT ADDRESS
}

// 00000000005FFE6C