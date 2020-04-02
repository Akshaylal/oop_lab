#include <iostream>
#include <cstdlib>

using namespace std;

class Employee{
	
	int age, salary;
	char name[20], des[40];
	
	
	public:
		Employee *ptr;
		void read();
		void display();
	
};


int main(){
	Employee *e = new Employee();
	Employee *p1;
	int n = 0, c;
	p1 = e;
	do{
		if(n != 0){
			p1->ptr = new Employee();
			p1 = p1->ptr;
		}
		cout<<"Employee "<<++n<<" :\n";
		p1->read();
		p1->ptr = NULL;
		cout<<"\nEnter more (1/0) ? ";
		cin>>c;
	}while(c != 0);
	p1 = e;
	for(int i = 0; i < n; ++i){
		cout<<"\nEmployee "<<i+1<<"\n";
		p1->display();
		p1 = p1->ptr;
	}
	return 0;
}

void Employee::read(){
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Designation : ";
	cin>>des;
	cout<<"Age : ";
	cin>>age;
	cout<<"Salary : ";
	cin>>salary;
}

void Employee::display(){
	cout<<"Name : "<<name;
	cout<<"\nAge : "<<age;
	cout<<"\nDesignation : "<<des;
	cout<<"\nSalary : "<<salary<<"\n";
}

