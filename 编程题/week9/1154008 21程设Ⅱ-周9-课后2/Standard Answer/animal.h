#ifndef ANIMAL_H
#define ANIMAL_H
 
#include <iostream>
#include <string>
 
class animal {
    private:
        const std::string _species;
        const int _eyes;
    public:
        animal(const std::string & species, const int & eyes) :
            _species(species), _eyes(eyes) {}
 
        void print_eyes() const {
            std::cout << _species << " has " << _eyes << " eyes." << std::endl;
        }
};
 
#endif
