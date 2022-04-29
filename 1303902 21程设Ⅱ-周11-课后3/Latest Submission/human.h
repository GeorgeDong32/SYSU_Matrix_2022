#ifndef HUMAN
#define HUMAN
#include<iostream>
#include<string>
#include"creature.h"
using namespace std;

class Human: public Creature{
    public:
        Human(const char* _languages, const char* _sound, int _age);
        Human(const char* _languages, const Creature& _creature);
        Human(const Human& other);
        ~Human();
        Human& operator=(const Human& other);

        //print out info: "Human with age speak languages"
        void say()const;

        //add new_language to the end of languages, split by ','
        void studyLanguage(const char* new_language);
        //friend std::ostream& operator<<(std::ostream& os, const People& _people);
    private:
        char* languages;
};
#endif