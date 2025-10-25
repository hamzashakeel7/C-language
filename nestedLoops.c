// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    int rows, columns;
    char symbol;
    
    printf("Enter rows: ");
    scanf("%d", &rows);
    
    printf("Enter columns: ");
    scanf("%d", &columns);
    
    printf("Enter symbol: ");
    scanf(" %c", &symbol);
    
    for(int i=1; i<=rows; i++ ){
        for(int j=1; j<=columns; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
    
    return 0;
}