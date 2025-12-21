// Online C compiler to run C program online
#include <stdio.h>

int critical_limit = 40;

void generate_report(int climateTemps[3][4]);

int main() {
    int climateTemps[3][4] = {
        {30, 32, 35, 28},
        {38, 42, 45, 39},
        {25, 26, 28, 24}
    };
    
    printf("Climate renport generator started: \n");
    
    generate_report(climateTemps);

    return 0;
}

void generate_report(int climateTemps[3][4]) {
    float sum;
    int count = 0;
    
    for(int i=0; i<3; i++){
        sum = 0.0;
        
        for(int j=0; j<4; j++){
            sum = sum + climateTemps[i][j];
            
            if(climateTemps[i][j] > critical_limit){
                printf("Critical temperature reached\n");
                count++;
            }    
            
        }
    }
    printf("Amount of critical temps reached: %d\n", count);
    
    // return 0;
}