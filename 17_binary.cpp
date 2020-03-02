#include <iostream>

using namespace std;

class Complex{
	int x, y;
	
	public:
		Complex();
		Complex(int, int);
		Complex operator+(Complex);
		Complex operator-(Complex);
		void print();
};

int main(){
	Complex a(2, 3), b(1, -6), c, d;
	c = a + b;
	d = a - b;
	a.print();
	b.print();
	c.print();
	d.print();
	return 0;
}

// Complex

Complex::Complex(){
	x = 0;
	y = 0;
}

Complex::Complex(int a, int b){
	x = a;
	y = b;
}

Complex Complex::operator+(Complex t){
	return Complex(x + t.x, y + t.y);
}

Complex Complex::operator-(Complex t){
	return Complex(x - t.x, y - t.y);
}

void Complex::print(){
	cout<<x;
	if(y >= 0)
		cout<<"+";
	cout<<y<<"i\n";
}
