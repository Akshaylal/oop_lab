#include <iostream>

using namespace std;

class Rectangle{
	float l, w;
	
	public:
		void setlength(float);
		void setwidth(float);
		float perimeter();
		float area();
		void show();
		int sameArea(Rectangle);
		
	
};

int main(){
	Rectangle r1, r2;
	r1.setlength(5);
	r1.setwidth(2.5);
	r2.setlength(5);
	r2.setwidth(18.9);
	
	r1.show();
	cout<<"Area : "<<r1.area();
	cout<<"\nPerimeter : "<<r1.perimeter()<<"\n";
	
	r2.show();
	cout<<"Area : "<<r2.area();
	cout<<"\nPerimeter : "<<r2.perimeter()<<"\n";
	
	if(r1.sameArea(r2)){
		cout<<"Same area\n";
	}else{
		cout<<"Not same area\n";
	}
	
	r1.setlength(15);
	r1.setwidth(6.3);
	
	r1.show();
	cout<<"Area : "<<r1.area();
	cout<<"\nPerimeter : "<<r1.perimeter()<<"\n";
	
	r2.show();
	cout<<"Area : "<<r2.area();
	cout<<"\nPerimeter : "<<r2.perimeter()<<"\n";
	
	if(r1.sameArea(r2)){
		cout<<"Same area\n";
	}else{
		cout<<"Not same area\n";
	}
	
	return 0;
}

// Rectangle

void Rectangle::setlength(float length){
	l = length;
}

void Rectangle::setwidth(float width){
	w = width;
}

float Rectangle::perimeter(){
	return 2*(l+w);
}

float Rectangle::area(){
	return l*w;
}

void Rectangle::show(){
	cout<<"\nLength : "<<l;
	cout<<"\nWidth  : "<<w<<"\n";
}

int Rectangle::sameArea(Rectangle R){
	float area, Rarea;
	area = l * w;
	Rarea = R.l * R.w;
	return (area == Rarea)?1:0;
}
