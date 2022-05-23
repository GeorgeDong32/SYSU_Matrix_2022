#ifndef CAT_H
#define CAT_H
class CatFamily;

class Cat
{
public:
	string name;
	Cat() {}
	Cat(string name) : name(name) {}
	friend CatFamily operator + (CatFamily f1, CatFamily f2);
};

class CatFamily {
public:
	Cat cats[10];
	int size;
	CatFamily() { size=0; }
	CatFamily(Cat cat) { cats[0]=cat; size=1; }
	void add_family(Cat cat) { cats[size]=cat; ++size; }
	friend CatFamily operator + (CatFamily f1, CatFamily f2);
	void print() {
		for (int i = 0; i < size; ++ i)
			cout << cats[i].name << " ";
		cout << endl;
	}
};

CatFamily operator + (CatFamily f1, CatFamily f2) {
	CatFamily f3;
	f3=f1;
	for (int i = 0; i < f2.size; ++ i)
		f3.cats[f1.size+i]=f2.cats[i];
	f3.size+=f2.size;
	return f3;
}
#endif
