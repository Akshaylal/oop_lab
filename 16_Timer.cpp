#include <iostream>

using namespace std;


class Timer{
	int hh, mm, ss;
	
	public:
		Timer(){hh = 0; mm = 0; ss = 0;}
		Timer(int, int, int);
		void display();
		friend Timer add(Timer, Timer);
};


int main(){
	Timer x(2, 5, 45), y(10, 20, 30), z;
	x.display();
	y.display();
	z.display();
	z = add(x, y);
	x.display();
	y.display();
	z.display();
	return 0;
}

// Timer

Timer::Timer(int h, int m, int s){
	ss = s % 60;
	m += s / 60;
	mm = m % 60;
	h += m / 60;
	hh = h;
}

void Timer::display(){
	cout<<hh<<":"<<mm<<":"<<ss<<"\n";
}

Timer add(Timer t1, Timer t2){
	Timer temp(t1.hh + t2.hh, t1.mm + t2.mm, t1.ss + t2.ss);
	return temp;
}
