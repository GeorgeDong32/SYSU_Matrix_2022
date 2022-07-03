#include "creature.h"
#include<string.h>
Creature::Creature(const char* _sound, int _age){
    sound = new char[strlen(_sound)+1];
    strcpy(sound,_sound);
    age = _age;
}
Creature::Creature(const Creature& other){
    sound = new char[strlen(other.sound)+1];
    strcpy(sound,other.sound);
    age = other.age;
}
Creature::~Creature(){
    delete []sound;
}
Creature& Creature::operator=(const Creature& other){
    if(this == &other)
        return *this;
    delete []sound;
    sound = new char[strlen(other.sound)+1];
    strcpy(sound,other.sound);
    age = other.age;
    return *this;
}
int Creature::getAge()const{
    return age;
}
void Creature::say()const{
    cout << "Creature with age " << age << " say " << sound << endl;
}
