#include "Safehouse.h"

/*

Available resource types:
- Oil
- Coal
- Gunpowder
- Leather
- Plastic
- Rubber
- Lewel
- Steel
- Iron
- Copper
- Zinc 
- Wood
- Glass
- Fibre
- Grass
- Electronic

*/


istream& operator >> (istream& is, Resource& r) {
	is >> r.name >> r.count;
	return is;
}


int main() {
	
	Safehouse house1;
	for(int i=0; i<MAX_RESOURCE_TYPES; ++i) {
		Resource new_resource;
		cin >> new_resource;
		house1 += new_resource;
		
		cout << "After adding " << new_resource.count << " " << new_resource.name << " to house1 >>>" << endl;
		cout << house1 << endl;
	}
	
	Safehouse house2; 
	for(int i=0; i<house1.GetCountOwnTypes()/2; ++i) {
		house2 = house2 + house1[i*2];
		
		cout << "After adding " << house1.GetOwnsCount(i*2) << " " << house1.GetOwnsName(i*2) << " to house2 >>>" << endl;
		cout << house2 << endl;
	}
	cout << "house2 >= house1? : " << boolalpha << (house2 >= house1) << endl;
	
	
	Safehouse house3;
	house3 = house1 + house3;
	house3 += house2; 
	cout << "After adding house1 and house2 to house3 >>>" << endl;
	cout << house3 << endl;
	cout << "house3 >= house1? : " << boolalpha << (house3 >= house1) << endl;
	
	Safehouse house4 = house3;
	house4 = house4;
	cout << "After initializing house4 with house3 >>> " << endl;
	cout << house4 << endl;
	
	return 0;
}

