#include <stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    struct pokemon bulbasaur;
    pikachu .hp = 35;
    pikachu .speed = 90;
    pikachu .attack = 55;
    pikachu .tier;
    printf("Enter the tier of Pikachu: ");
    scanf(" %c", &pikachu.tier); // Added space before %c to consume any newline character  

    bulbasaur .hp = 45;
    bulbasaur .speed = 45;  
    bulbasaur .attack = 49;
    bulbasaur .tier = 'B';
    printf("Pikachu HP: %d\n", pikachu.hp);
}


// if we use same data types then we take arrays and if data types are different then we use structure.
// structure is a collection of different data types.

