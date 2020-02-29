#include <iostream>

using namespace std;


class Number{
	int n;
	
	public:
		Number(){n = 0;}
		void show();
		void read();
		int operator --();
};


int main() {
	Number x, y, z;
	x.read();
	y.read();
	z.read();
	x.show();
	y.show();
	z.show();
	--x;
	--y;
	--z;
	x.show();
	y.show();
	z.show();
	return 0;
}

int Number::operator--(){
	n = -n;
}

void Number::show(){
	cout<<n<<"\n";
}

void Number::read(){
	cout<<": ";
	cin>>n;
}
