// Question 3: The Weekly Spender (Total Sum)
// Focus: Calculating a running total.
// You want to track how much money you spent over 2 weeks across 5 days (Mon-Fri).
// Write a C program that:
// Uses a function inputExpenses to fill a 2 × 5 array.
// Uses a function displayWeeklyTotal to calculate and print the total money spent in Week 1 and Week 2 separately.
// Example Logic:
// Week 1 expenses: 10, 20, 10, 50, 10.
// Output: "Total spent in Week 1: 100"

// Online C compiler to run C program online
#include <stdio.h>

void inputExpenses(int money[2][5]);
void displayWeeklyTotal(int money[2][5]);

int main() {
    int money[2][5];
    
    inputExpenses(money);
    displayWeeklyTotal(money);

    return 0;
}

void inputExpenses(int money[2][5]){
    for(int i=0; i<2; i++){
        printf("---week %d---\n", i+1);
        for(int j=0; j<5; j++){
            printf("Enter day %d expenses: ", j+1);
            scanf("%d", &money[i][j]);
        }
    }
}

void displayWeeklyTotal(int money[2][5]){
    int total = 0;
    for(int i=0; i<2; i++){
        for(int j=0; j<5; j++){
            total = total + money[i][j];
        }
        printf("Total of week %d is: %d\n", i+1, total);
    }
}