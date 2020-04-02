#include <iostream>

using namespace std;


class Player{
	char name[20];
	static int num;
	int runs, matches, out;
	float batting_avg;
	bool e;
	
	public:
		Player(){
			num = 0;
			runs = 0;
			matches = 0;
			e = 0;
			batting_avg = 0;
		}
		
		void add();
		void display();
		void avg();
		bool exist();
		static int status();
		
};

int Player::num;

int main(){
	int c, i;
	Player list[20];
	
	do{
		i = 0;
		cout<<"\n1. Add\n2. View\n0. Exit\n:";
		cin>>c;
		switch(c){
			case 1:
				if(Player::status() == 20){
					cout<<"List Full\n";
				}else{
					while((i < 20) & list[i].exist()) i++;
					list[i].add();
				}
			break;
			case 2:
				if(Player::status() == 0){
					cout<<"List Empty\n";
				}else{
					while(i < 20){
						if(list[i].exist())
							list[i].display();
						i++;
					}
				}
			break;
			case 0:break;
			default :cout<<"Invalid option\n";
		}
	}while(c != 0);	
	
	return 0;
}

void Player::add(){
	cout<<"Name : ";
	cin>>name;
	cout<<"Runs : ";
	cin>>runs;
	cout<<"Matches : ";
	cin>>matches;
	cout<<"Number of out : ";
	cin>>out;
	batting_avg = (float)runs/out;
	num++;
	e = 1;
}

void Player::display(){
	cout<<"Name : "<<name<<"\n";
	cout<<"Runs : "<<runs<<"\n";
	cout<<"Matches : "<<matches<<"\n";
	cout<<"Number of out : "<<out<<"\n";
	cout<<"Batting Averege : "<<batting_avg<<"\n";
}

bool Player::exist(){
	return e;
}

int Player::status(){
	return num;
}
