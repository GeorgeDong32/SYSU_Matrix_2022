#include"human.h"
#include<string.h>
Human::Human(const char* _languages, const char* _sound, int _age):Creature(_sound,_age){
    languages = new char[strlen(_languages)+1];
    strcpy(languages,_languages);
}
Human::Human(const char* _languages, const Creature& _creature):Creature(_creature){
    languages = new char[strlen(_languages)+1];
    strcpy(languages,_languages);
}
Human::Human(const Human& other):Creature(other){
    languages = new char[strlen(other.languages)+1];
    strcpy(languages,other.languages);
}
Human::~Human(){
    delete []languages;
}
Human& Human::operator=(const Human& other){
    if(this == &other){
        return *this;
    }
    Creature::operator=(other);
    delete []languages;
    languages = new char[strlen(other.languages)+1];
    strcpy(languages,other.languages);
    return *this;
}
void Human::say()const{
    cout << "Human with age " << getAge() << " speak " << languages << endl;
}
void Human::studyLanguage(const char* new_language){
    size_t original_length = strlen(languages);
    size_t new_length = original_length+strlen(new_language)+2;
    char* new_languages = new char[new_length];
    strcpy(new_languages, languages);
    new_languages[original_length]=',';
    new_languages[original_length+1]='\0';
    delete []languages;
    strcat(new_languages, new_language);
    languages = new_languages;
}