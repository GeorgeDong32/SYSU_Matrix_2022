#include <iostream>
using namespace std;

#define I(i,n) for (int i = 0; i < n; ++ i) 

template <typename E>
class Vector
{
	E d[100];
	int s;
public:
	Vector() { s=0; }
	Vector(const E e[], int size) { s=0; I(i,size) push_back(e[i]); }
	void push_back(const E&e) { d[s]=e; ++ s; }
	void pop_back() { -- s; }
	int size() const {return s;}
	E& operator[](int i) { return d[i];}
	const E& operator[](int i) const { return d[i];}
};


template <typename E>
int index(const Vector<E> & v, const E & e) {
	I(i, v.size())
		if (v[i] == e) return i;
	return -1;
}

template <typename E>
void sort(Vector<E> & v) {
	E tmp;
	int n = v.size();
	I(i, n-1)
		for (int j = n-2; j >= i; -- j) 
			if (v[j] > v[j+1]) {
				tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
}

template <typename E>
class Set
{
	Vector<E> data;
public:
	Set() {}
	Set(const Vector<E> & v) {
		I(i, v.size())
			add(v[i]);
	}
	bool has(const E & e) const {
		return index(data, e) != -1;
	}
	void add(const E & e) {
		if (index(data, e) == -1)
			data.push_back(e);
	}
	void remove(const E & e) {
		int idx = index(data, e);
		if (idx == -1) return;
		data[idx] = data[data.size()-1];
		data.pop_back();
	}
	Vector<E> sorted() const {
		Vector<E> v = data;
		sort(v);
		return v;
	}
	Set Union(const Set & s) const {
		Set u;
		I(i, s.data.size())
			if (has(s.data[i]))
				u.add(s.data[i]);
		return u;
	}
	int size() const {
		return data.size();
	}
};

class FriendsFinder2
{
	Vector<string> p;
	Vector<Vector<string> > f;
public:
	FriendsFinder2(string p0[], string f0[][10]) : p(p0,10) {
		I(i,10) f.push_back(Vector<string>());
		I(i,10) 
			I(j,10)
				f[i].push_back(f0[i][j]);
	}
	void operator() () {
		Set<string> s(f[0]);
		I(i,10) {
			if (i == 0) continue;
			Set<string> s2(f[i]);
			s = s.Union(s2);
			// cout << s.size() << endl;
		}
		Vector<string> names = s.sorted();
		I(i, names.size()) cout << names[i] << " ";
	}
};
