class B: public A {
	public:
		B(int x, int y): A(x), b(y) {};
		void show() const {
			A::show();
			cout<<"b=" << b << endl;
		};
	private:
		int b;
};

