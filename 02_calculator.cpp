#include<iostream>
using namespace std;

int main(){
	int opt = 1;
	float a, b, r;
	cout<<"Enter values:\n";
	cin>>a>>b;
	while(opt != 0){
		cout<<"1. Add\n2. Substract\n3. Multiply\n4. Divide\n0. Exit\n:";
		cin>>opt;
		switch(opt){
			case 1:r = a + b;
				cout<<a<<" + "<<b<<" = "<<r;
			break;
			case 2:r = a - b;
				cout<<a<<" - "<<b<<" = "<<r;
			break;
			case 3:r = a * b;
				cout<<a<<" * "<<b<<" = "<<r;
			break;
			case 4:r = a / b;
				cout<<a<<" / "<<b<<" = "<<r;
			break;
			case 0:break;
			default :cout<<"Invalid";
		}
		cout<<"\n";
	}
	return 0;
}
