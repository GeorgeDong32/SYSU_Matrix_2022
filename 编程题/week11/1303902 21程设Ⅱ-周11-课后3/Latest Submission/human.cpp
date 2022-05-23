#include "human.h"
#include <string>
#include<cstring>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
Human::Human(const char* _languages, const char* _sound, int _age): Creature(_sound, _age) {
	languages = new char[strlen(_languages) + 1];
	strcpy(languages, _languages);
}
Human::Human(const char* _languages, const Creature& _creature): Creature(_creature) {
	languages = new char[strlen(_languages) + 1];
	strcpy(languages, _languages);	
}
Human::Human(const Human& other): Creature(other)
{
	languages = new char[strlen(other.languages) + 1];
	strcpy(languages, other.languages);
}
Human::~Human()
{
	delete[] languages;
}
Human& Human::operator=(const Human& other)
{
	if (this == &other) return *this;
	Creature& th = *this;
	th = other;
	
	delete[] languages;
	languages = new char[strlen(other.languages) + 1];
	strcpy(languages, other.languages);	
}

void Human::say()const
{
	cout << "Human with age " << getAge() << " speak " << languages << endl;
}

void Human::studyLanguage(const char* new_language)
{
	int len1 = strlen(languages);
	int len2 = strlen(new_language);
	char* tem = new char[len1 + 1];
	strcpy(tem, languages);
	delete[] languages;
	languages = new char[len1 + len2 + 2];
	strcpy(languages, tem);
	languages[len1] = ',';
	languages[len1 + 1] = '\0';
	strcat(languages, new_language);
    delete[] tem;
}



