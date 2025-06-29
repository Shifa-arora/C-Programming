struct pokemon {
    char name[20];
    int level;
    int health;
};
struct legendaryPokemon {
    int attack;
    struct pokemon x;

    
};


//how are structure elements stored?
// 1. structure elements are stored in contiguous memory locations.
// 2. structure elements are stored in the order they are declared in the structure definition.