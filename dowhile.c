// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int num = 0, sum = 0;
    
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
        
        sum = sum + num;
        
    }while(num > 0);
    
    printf("%d", sum);
    
    

    return 0;
}