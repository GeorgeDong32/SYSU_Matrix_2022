#include <iostream>
#include <string>
#include <vector>
#include "creature.h"
#include "human.h"
using namespace std;

int main()
{
    Creature dog("WangWang", 8);
    Human Lihua("Chinese", "null", 46);

    Creature* ptr = &dog;
    ptr->say();

    ptr = &Lihua;
    ptr->say();
    Lihua.studyLanguage("English");
    
    Human ProfessorJ = Lihua;
    ptr = &ProfessorJ;
    ProfessorJ.studyLanguage("Japanese");
    ProfessorJ.studyLanguage("German");
    ProfessorJ.say();
    string learn_language;
    cin >> learn_language;
    ProfessorJ.studyLanguage(learn_language.c_str());
    ptr->say();
    return 0;
}