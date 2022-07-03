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
class Counter
{
	class Tuple
	{
	public:
		E data;
		int count;
		Tuple() {}
		Tuple(const E & d, int c) : data(d), count(c) {}
		bool operator == (const Tuple & t) const {
			return data == t.data;
		}
		bool operator > (const Tuple & t) const {
			if (count < t.count) return true;
			if (count > t.count) return false;
			return data > t.data;
		}
	};
	
	Vector<Tuple> data;
public:
	
	void count(const E & e) {
		int idx = index(data, Tuple(e,0));
		if (idx == -1) data.push_back(Tuple(e,1));
		else data[idx].count += 1;
	}
	int get(const E & e) const {
		int idx = index(data, Tuple(e,0));
		if (idx == -1) return 0;
		return data[idx].count;
	}
	void remove(const E & e) {
		int idx = index(data, Tuple(e,0));
		if (idx == -1) return;
		data[idx] = data[data.size()-1];
		data.pop_back();
	}
	Vector<E> sorted() const {
		Vector<Tuple> v = data;
		sort(v);
		Vector<E> d;
		for (int i = 0; i < v.size(); ++ i) d.push_back(v[i].data);
		return d;
	}
	void discard_less_than(int count) {
		Vector<Tuple> v;
		for (int i = 0; i < data.size(); ++ i)
			if (data[i].count >= count)
				v.push_back(data[i]);
		data = v;
	}
	
	template <typename E2>
	friend ostream & operator << (ostream & o, Counter<E2> & counter);
};

template <typename E>
ostream & operator << (ostream & o, Counter<E> & counter) {
	sort(counter.data);
	for (int i = 0; i < counter.data.size(); ++ i) {
		o << counter.data[i].data << " " << counter.data[i].count << endl;
	} 
	return o;
}


