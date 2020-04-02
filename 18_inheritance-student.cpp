#include <iostream>

#define TOTAL 300

using namespace std;

// person name age gender

class Person{
	char name[20], gender;
	int age;
	
	protected:
		void print_details();
		void read_details();
};

// student m1 m2 m3 total grade

class Student: public Person{
	int m1, m2, m3, total;
	
	char get_grade(int);
	void get_marks();
	
	public:
		void get();
		void print();
};



int main(){
	Student s1, s2;
	s1.get();
	s2.get();
	s1.print();
	s2.print();
	cout<<endl;
	return 0;
}


// Person

void Person::print_details(){
	cout<<"\n\nName   : "<<name;
	cout<<"\nAge    : "<<age;
	cout<<"\nGender : "<<gender;
}

void Person::read_details(){
	cout<<"Name   : ";
	cin>>name;
	cout<<"Age    : ";
	cin>>age;
	cout<<"Gender : ";
	cin>>gender;
}


// Student

void Student::get_marks(){
	cout<<"Enter marks :\nM1 :";
	cin>>m1;
	cout<<"M2 :";
	cin>>m2;
	cout<<"M3 :";
	cin>>m3;
	total = m1 + m2 + m3;
}

char Student::get_grade(int mark){
	int per = ((float)mark/TOTAL)*100;
	if(per > 90)
		return 'O';
	if(per > 80)
		return 'A';
	if(per > 70)
		return 'B';
	if(per > 60)
		return 'C';
	if(per > 50)
		return 'D';
	if(per > 40)
		return 'E';
	return 'F';
}

void Student::get(){
	read_details();
	get_marks();
}

void Student::print(){
	print_details();
	cout<<"\nMark 1 : "<<m1;
	cout<<"\nMark 2 : "<<m2;
	cout<<"\nMark 3 : "<<m3;
	cout<<"\nTotal  : "<<total;
	cout<<"\nGrade  : "<<get_grade(total);
}
