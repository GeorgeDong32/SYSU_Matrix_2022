#ifndef CREATURE
#define CREATURE
#include<iostream>
using namespace std;
class Creature{
    public:
        Creature(const char* _sound, int _age);
        Creature(const Creature& other);
        virtual ~Creature();
        Creature& operator=(const Creature& other);

        //print out info: "Creature with age say sound"
        virtual void say()const;

        int getAge()const;
        //friend std::ostream& operator<<(std::ostream& os, const Animal& _animal);
    private:
        char* sound;
        int age;
};
#endif