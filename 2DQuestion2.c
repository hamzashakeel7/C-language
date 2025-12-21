// Online C compiler to run C program online
#include <stdio.h>

int eco_mode = 1;

void regulate_building(int rooms[2][3],int target_temp);

int main() {
    int rooms[2][3] = {{24, 28, 30}, {35,21,23}};
    
    printf("--- Before Regulation ---\n");
    printf("Floor 1 Room 0 is: %d\n", rooms[1][0]);
    
    regulate_building(rooms, 24);
    
     printf("--- After Regulation ---\n");
     printf("Floor 1 Room 0 is now: %d\n", rooms[1][0]);

    return 0;
}

void regulate_building(int rooms[2][3], int target_temp) {
    printf("Regulation started!!\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            int needs_cooling = 0;
            printf("%d \n", rooms[i][j]);
            
            if(eco_mode == 1){
                if(rooms[i][j] > (target_temp + 5)){
                    needs_cooling = 1;
                }
            }
            else{
                if(rooms[i][j] > target_temp){
                    needs_cooling = 1;
                }
            }
            
            if(needs_cooling == 1){
                printf("Activating AC: \n");
                rooms[i][j] = target_temp;
            }
        }
    }
}