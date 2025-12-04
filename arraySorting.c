
// Sorting array

#include <stdio.h>

void sort(char numbers[], int size){
    for(int i=0; i < size; i++){
        for(int j=0; j < size - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}

void print(char numbers[], int size){
    for(int i=0; i < size; i++){
        printf("%c ", numbers[i]);
    }
}

int main() {
    // int numbers[] = {9,1,2,4,5,8,6};
    char numbers[] = {'E', 'B', 'F', 'A', 'C', 'D'};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    
    sort(numbers, size);
    print(numbers, size);
    

    return 0;
}