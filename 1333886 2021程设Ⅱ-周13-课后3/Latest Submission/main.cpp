#include "Orcs.h"


int main() {
	
	
	cout << "*************** Testing class Creature ***************" << endl;
	
	Creature *unknown = new Creature(2, 2);
	cout << "Calling GetHands(): " << unknown->GetHands() << endl;
	cout << "Calling GetLegs(): " << unknown->GetLegs() << endl; 
	delete unknown;
	cout << endl;
	
	cout << "*************** Testing class Beast ***************" << endl;
	
	Creature *beast1 = new Beast(2, 4, "SpiderKing");
	cout << "Calling GetHands(): " << beast1->GetHands() << endl;
	cout << "Calling GetLegs(): " << beast1->GetLegs() << endl;
	delete beast1;
	cout << endl;
	
	Beast *beast2 = new Beast(2, 3, "TripleLegCat");
	cout << "Calling GetHands(): " << beast2->GetHands() << endl;
	cout << "Calling GetLegs(): " << beast2->GetLegs() << endl;
	cout << "Calling GetName(): " << beast2->GetName() << endl;
	delete beast2;
	cout << endl;
	
	cout << "*************** Testing class Human ***************" << endl;
	
	Creature *human1 = new Human(2, 2, "Talion");
	cout << "Calling GetHands(): " << human1->GetHands() << endl;
	cout << "Calling GetLegs(): " << human1->GetLegs() << endl;
	delete human1;
	cout << endl;
	
	Human *human2 = new Human(2, 2, "Altariel");
	cout << "Calling GetHands(): " << human2->GetHands() << endl;
	cout << "Calling GetLegs(): " << human2->GetLegs() << endl;
	cout << "Calling GetName(): " << human2->GetName() << endl;
	delete human2;
	cout << endl;
	
	cout << "*************** Testing class Orc ***************" << endl;
	
	Creature *orc1 = new Orc(2, 4, "Herkarim", "Centaur");
	cout << "Calling GetHands(): " << orc1->GetHands() << endl;
	cout << "Calling GetLegs(): " << orc1->GetLegs() << endl;
	delete orc1; 
	cout << endl;
	
	Beast *orc2 = new Orc(2, 2, "OgreMagi", "BlueFat");
	cout << "Calling GetHands(): " << orc2->GetHands() << endl;
	cout << "Calling GetLegs(): " << orc2->GetLegs() << endl;
	cout << "Calling GetName(): " << orc2->GetName() << endl;
	delete orc2;
	cout << endl;
	
	Human *orc3 = new Orc(4, 2, "Miranda", "NotreDame");
	cout << "Calling GetHands(): " << orc3->GetHands() << endl;
	cout << "Calling GetLegs(): " << orc3->GetLegs() << endl;
	cout << "Calling GetName(): " << orc3->GetName() << endl;
	delete orc3;
	cout << endl;
	
	Orc *orc4 = new Orc(2, 0, "Cassiopea", "SnakeWoman");
	cout << "Calling GetHands(): " << orc4->GetHands() << endl;
	cout << "Calling GetLegs(): " << orc4->GetLegs() << endl;
	cout << "Calling GetBeastName(): " << orc4->GetBeastName() << endl;
	cout << "Calling GetHumanName(): " << orc4->GetHumanName() << endl;
	delete orc4;
	cout << endl;

	return 0;
}
