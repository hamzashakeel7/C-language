// Question 1: The Student Gradebook (Average)
// Focus: Accumulating a sum and dividing.
// A teacher needs to calculate the average score for 3 students across 3 subjects.
// Write a C program that:
// Uses a function inputMarks to fill a 3 × 3 array.
// Uses a function calculateAverage to display the average marks for each student.
// Example Logic:
// Student 1 Marks: 80, 90, 70.
// Total = 240. Average = 80.
// Output: "Student 1 Average: 80"

#include <stdio.h>

void inputMarks(int marks[3][3]);
void calculateAverage(int marks[3][3]);

int main() {
    int marks[3][3];
    
    inputMarks(marks);
    calculateAverage(marks);

    return 0;
}

void inputMarks(int marks[3][3]){
    for(int i=0; i<3; i++){
        printf("---Student %d---\n", i+1);
        for(int j=0; j<3; j++){
            printf("Enter student mark for subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
}

void calculateAverage(int marks[3][3]){
    int total = 0;
    int average;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            total = total + marks[i][j];
            average = total / 3;
        }
        printf("Student %d has %d average\n", i+1, average);
    }
}