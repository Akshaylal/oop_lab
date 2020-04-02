#include<iostream>
using namespace std;

int a, b;

void swap(){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	cout<<"Enter numbers\n";
	cin>>a>>b;
	swap();
	cout<<a<<" "<<b<<"\n";
	return 0;
}
