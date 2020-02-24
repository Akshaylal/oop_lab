#include <iostream>

using namespace std;


class Student{
	char stud_name[20], stud_branch[20];
	int stud_rollno;
	static int num;
	public:
		void read();
		void write();
		static int count();
};

int Student::num;


int main(){
	int c, i;
	Student s[20];
	do{
		cout<<"\n1. Add\n2. Display\n0. Exit\n:";
		cin>>c;
		switch(c){
			case 1:
				if(Student::count() == 20)
					cout<<"List Full\n";
				else
					s[Student::count()].read();
			break;
			case 2:i = Student::count();
				while(i > 0){
					--i;
					s[i].write();
				}
			break;
			case 0:break;
			default :cout<<"Invalid option\n";
		}
	}while(c != 0);	
	return 0;
}



void Student::read(){
	cout<<"Name : ";
	cin>>stud_name;
	cout<<"Roll no: ";
	cin>>stud_rollno;
	cout<<"Branch : ";
	cin>>stud_branch;
	num++;
}

void Student::write(){
	cout<<"Name : "<<stud_name;
	cout<<"\nRoll no: "<<stud_rollno;
	cout<<"\nBranch : "<<stud_branch;
	cout<<"\n";
	num++;
}

int Student::count(){
	return num;
}
