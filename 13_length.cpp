#include <iostream>

using namespace std;

class DM;

class DB{
	int feet;
	float inch;
	
	public:
		void getl();
		void show();
		friend DM add(DB, DM);
};

class DM{
	int m;
	float cm;
	
	public:
		void getl();
		void show();
		friend DM add(DB, DM);
};

int main(){
	DB x;
	DM y, z;
	
	x.getl();
	y.getl();
	
	z = add(x, y);
	
	z.show();
	
	return 0;
}


DM add(DB a, DM b){
	DM temp;
	temp.cm = (a.feet * 12 + a.inch) * 2.54;
	temp.cm += b.cm;
	temp.m = (int)(temp.cm / 100);
	temp.cm -= temp.m * 100;
	temp.m += b.m;
	return temp;
}



// DB

void DB::show(){
	cout<<feet<<" feet "<<inch<<" inches\n";
}

void DB::getl(){
	int t;
	cout<<"Enter length in feet and inches : ";
	cin>>feet>>inch;
	if(inch >= 12){
		t = inch / 12;
		feet += t;
		inch -= t * 12;
	}
}


// DM

void DM::show(){
	cout<<m<<" m "<<cm<<" cm\n";
}

void DM::getl(){
	int t;
	cout<<"Enter length in meter and cm : ";
	cin>>m>>cm;
	if(cm >= 100){
		t = cm / 100;
		m += t;
		cm -= t * 100;
	}
}
