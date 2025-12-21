// Question
// Temperature Report (Super Easy)
// A weather station records temperature for 2 cities for 4 days.
// Write a C program that:
// 1. Uses a function to input temperature values into a 2 × 4 array.
// 2. Uses another function to find and display the highest temperature.

// Answer
#include <stdio.h>

void inputTemp(int temp[2][4]);
void displayTemp(int temp[2][4]);

int main() {
    int temp[2][4];
    
    inputTemp(temp);
    displayTemp(temp);

    return 0;
}

void inputTemp(int temp[2][4]){
    for(int i=0; i<2; i++){
        printf("---City %d---\n", i+1);
        for(int j=0; j<4; j++){
            printf("Enter temp for day %d: ", j+1);
            scanf("%d", &temp[i][j]);
        }
    }
}

void displayTemp(int temp[2][4]){
    printf("Displaying highest temp\n");
    for(int i=0; i<2; i++){
        int highest = temp[i][0];
        int highestDay = 1;
        
        for(int j=0; j<4; j++){
            if(temp[i][j] > highest){
                highest = temp[i][j];
                highestDay = j+1;
            }
        }
        printf("The highest temp in city %d on day %d is: %d \n", i+1, highestDay, highest);
    }
}