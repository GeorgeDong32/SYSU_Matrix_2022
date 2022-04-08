#pragma once

class point{
	public:
		point(double x=0,double y=0){
			this->x=x;
			this->y=y;
			count++;
		}
		static int count;
		void print();
		bool judge(const point &,const point &);
	private:
		double x;
		double y;
};