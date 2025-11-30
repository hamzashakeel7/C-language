// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numbers[3][3] = {{1,2,3}, {4,5,6}, {9,10,2}};
    
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    
    // DEClare and initilize new array
    int secNum[2][3];
    secNum[0][0] = 1;
    secNum[0][1] = 2;
    secNum[1][1] = 3;

    return 0;
}