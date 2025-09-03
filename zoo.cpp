#include "Animal.h"
#include "AnimalsInZoo.h"

int main() {
    Animal animal1("African Elephant", 1758);
    Animal animal2("Giant Panda", 1869);
    Animal animal3("Snow Leopard", 1777);

    animal1.display();
    animal2.display();
    animal3.display();

    AnimalsInZoo z;
    z.display();
    z.setAnimal(animal1);
    z.display();

    return 0;
}
