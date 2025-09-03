#include "AnimalsInZoo.h"                                               
#include <iostream>                                               
                                                                
AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}                                   
                                                                              
AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals(1), animal(a) {}                       
                                                  
void AnimalsInZoo::setAnimal(const Animal& a) {                          
    animal = a;                              
    numAnimals = 1;                         
}                                            
                                             
void AnimalsInZoo::display() const {                                  
    std::cout << "Animals in zoo: " << numAnimals << std::endl;               
    if (numAnimals > 0) {                            
        animal.display();                 
    }                           
}               
                                      
