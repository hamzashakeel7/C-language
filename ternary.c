// Online C compiler to run C program online
#include <stdio.h>

int findMax(int x, int y){
    return (x > y) ? x : y;
}


int main() {
    int max = findMax(2, 3);
    
    printf("%d", max);

    return 0;
}