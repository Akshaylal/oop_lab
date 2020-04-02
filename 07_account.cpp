#include <iostream>
#include <cstring>

using namespace std;

class Account{
	int acc, bal;
	char name[20];
	Account *acptr;
	
	public:
		Account(int a, char n[]){bal = 0; strcpy(name, n); acc = a; acptr = NULL;}
		bool deposit(int, int);
		bool withdraw(int, int);
		bool balance(int);
		Account* newac(int, char*);
		Account* nextac();
};

int main(){
	char name[20];
	int acc, n = 0, c, amt;
	bool f;
	
	Account *header = NULL, *ptr = NULL, *tptr = NULL;
	
	do{
		cout<<"\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Balance\n0. Exit\n:";
		cin>>c;
		switch(c){
			case 1:
				cout<<"Enter name : ";
				cin>>name;
				cout<<"Account no : "<<n+1<<"\n";
				if(header == NULL){
					header = new Account(n+1, name);
					ptr = header;
				}else{
					ptr = ptr->newac(n+1, name);
				}
				++n;
			break;
			case 2:
				cout<<"Enter account no: ";
				cin>>acc;
				cout<<"Enter amount: ";
				cin>>amt;
				tptr = header;
				while(tptr != NULL){
					f = tptr->deposit(acc, amt);
					if(f){
						break;
					}else{
						tptr = tptr->nextac();
					}
				}
				if(!f){
					cout<<"Account does not exist\n";
				}
			break;
			case 3:
				cout<<"Enter account no: ";
				cin>>acc;
				cout<<"Enter amount: ";
				cin>>amt;
				tptr = header;
				while(tptr != NULL){
					f = tptr->withdraw(acc, amt);
					if(f){
						break;
					}else{
						tptr = tptr->nextac();
					}
				}
				if(!f){
					cout<<"Account does not exist\n";
				}
			break;
			case 4:
				cout<<"Enter account no: ";
				cin>>acc;
				tptr = header;
				while(tptr != NULL){
					f = tptr->balance(acc);
					if(f){
						break;
					}else{
						tptr = tptr->nextac();
					}
				}
				if(!f){
					cout<<"Account does not exist\n";
				}
			break;
			case 0:break;
			default :cout<<"Invalid option\n";
		}
	}while(c != 0);	
	
	return 0;
}


//Account

bool Account::deposit(int ac, int d){
	if(acc == ac){
		bal += d;
		cout<<"Deposited \n";
		balance(acc);
		return 1;
	}else{
		return 0;
	}
}

bool Account::withdraw(int ac, int w){
	if(acc == ac){
		if(bal-w > 2000){
			bal -= w;
			cout<<"Withdrawed\n";
			balance(acc);
		}else{
			cout<<"Not sufficient balance\n";
			balance(acc);
		}
		return 1;
	}else{
		return 0;
	}
}

bool Account::balance(int ac){
	if(acc == ac){
		cout<<"Balance : "<<bal<<"\n";
		return 1;
	}else{
		return 0;
	}
}

Account* Account::newac(int a, char n[]){
	if(acptr == NULL){
		acptr = new Account(a, n);
		return acptr;
	}else{
		return NULL;
	}
}

Account* Account::nextac(){
	return acptr;
}
