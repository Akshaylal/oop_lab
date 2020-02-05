#include <iostream>

using namespace std;

class Shopping{
	static float total;
	static int num;
	float price;
	int code;
	char name[20];
	bool item;
	
	public:
		Shopping(){
			price = 0;
			code = 0;
			item = 0;
		}
		
		static void getTotal();
		static int status();
		void del();
		void add();
		void display();
		bool exist();
		bool checkCode(int);
};

float Shopping::total;
int Shopping::num;

int main(){
	int c, i, code;
	Shopping list[20];
	
	do{
		i = 0;
		cout<<"\n1. Add\n2. Remove\n3. View\n4. Total\n0. Exit\n:";
		cin>>c;
		switch(c){
			case 1:
				if(Shopping::status() == 20){
					cout<<"List Full\n";
				}else{
					while((i < 20) & list[i].exist()) i++;
					list[i].add();
				}
			break;
			case 2:
				cout<<"Enter code : ";
				cin>>code;
				while((i < 20) & !list[i].checkCode(code)) i++;
				list[i].del();
			break;
			case 3:
				if(Shopping::status() == 0){
					cout<<"List Empty\n";
				}else{
					while(i < 20){
						if(list[i].exist())
							list[i].display();
						i++;
					}
				}
			break;
			case 4:
				Shopping::getTotal();
			break;
			case 0:break;
			default :cout<<"Invalid option\n";
		}
	}while(c != 0);	
	
	return 0;
}

bool Shopping::checkCode(int cod){
	return (cod == code);
}

void Shopping::getTotal(){
	cout<<total<<"\n";
}

void Shopping::add(){
	cout<<"Name : ";
	cin>>name;
	cout<<"Code : ";
	cin>>code;
	cout<<"Price : ";
	cin>>price;
	item = 1;
	num++;
	total += price;
}

void Shopping::del(){
	item = 0;
	num--;
	total -= price;
	name[0] = '\0';
	price = 0;
	code = 0;
}

bool Shopping::exist(){
	return item;
}

int Shopping::status(){
	return num;
}

void Shopping::display(){
	cout<<"Name : "<<name<<"\n";
	cout<<"Code : "<<code<<"\n";
	cout<<"Price : "<<price<<"\n";
}
