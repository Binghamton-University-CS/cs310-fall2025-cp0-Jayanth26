CXX = g++                                  
CXXFLAGS = -Wall -Wextra -std=c++17                      

all: zoo

zoo: zoo.o Animal.o AnimalsInZoo.o
	$(CXX) $(CXXFLAGS) zoo.o Animal.o AnimalsInZoo.o -o zoo

zoo.o: zoo.cpp Animal.h AnimalsInZoo.h
	$(CXX) $(CXXFLAGS) -c zoo.cpp

Animal.o: Animal.cpp Animal.h
	$(CXX) $(CXXFLAGS) -c Animal.cpp

AnimalsInZoo.o: AnimalsInZoo.cpp AnimalsInZoo.h Animal.h
	$(CXX) $(CXXFLAGS) -c AnimalsInZoo.cpp

clean:
	rm -f *.o zoo
