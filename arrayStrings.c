
// Writting strings in array

#include <stdio.h>
#include <string.h>

int main() {
    char cars[][10] = {"haroon", "shaista", "Durrani"};
    
    int n = sizeof(cars) / sizeof(cars[0]);
    
    // used to add any element in the array
    strcpy(cars[0], "hamza");
    
    for(int i=0; i<n; i++){
        printf("%s\n", cars[i]);
    }

    return 0;
}