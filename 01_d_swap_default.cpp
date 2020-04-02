#include<iostream>
using namespace std;

void swap(int x = 6, int y = 7){
	int temp = x;
	x = y;
	y = temp;
	cout<<"Inside Fucntion: "<<x<<" "<<y<<"\n";
}

int main(){
	int a, b;
	cout<<"Enter numbers\n";
	cin>>a>>b;
	swap(a, b);
	cout<<"Default : ";
	swap();
	cout<<"Outside Function : ";
	cout<<a<<" "<<b<<"\n";
	return 0;
}
