#include <stdio.h>

int main() {
    int prices[] = {1, 10, 40, 100, 900};
    int n;
    
    // a formula where even if the array is small or large, it will adjust itself and make it 
    // smaller or bigger depending on the size of the array. If i add 800 after the last array element
    // it will automatically adjuut is. Always bettter to use in array looping. 
    n = sizeof(prices) / sizeof(prices[0]);  
    
    for(int i=0; i<n; i++){
        printf("%d\n", prices[i]);
    }

    return 0;
}