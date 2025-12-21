#include <stdio.h>
#include <string.h>

struct Player{
    char name[12];
    int age;
};

int main(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Hamza");
    player1.age = 20;

    printf("name: %s \t Age: %d", player1.name, player1.age);

    return 0;
}
