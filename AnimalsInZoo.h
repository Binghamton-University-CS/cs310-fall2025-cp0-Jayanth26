#ifndef ANIMALSINZOO_H                                            
#define ANIMALSINZOO_H                                       
                               
#include "Animal.h"                          
                              
class AnimalsInZoo {                              
private:                           
    int numAnimals;                                     
    Animal animal;                                                  
public:                                               
    AnimalsInZoo();                                                             
    explicit AnimalsInZoo(const Animal& a);                                      
    void setAnimal(const Animal& a);                                    
    void display() const;                                             
};                                                      
                           
#endif                                  
