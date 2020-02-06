#include <iostream>

#define STACK_MAX 20

using namespace std;


class Stack{
	int s[STACK_MAX], tos;
	public:
		bool push(int);
		bool pop(int*);
		void display();
		bool compare(Stack);
		
		Stack(){
			tos = -1;
		}
};


int main(){
	int opt, x;
	Stack s1, s2;
	do{
		cout<<"1. PUSH\n2. POP\n3. Display\n4. PUSH (Stack 2)\n5. POP (Stack 2)\n6. Display (Stack 2)\n7. Compare\n0. Exit\n:";
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"Enter element : ";
				cin>>x;
				if(!s1.push(x)) cout<<"Stack Overflow\n";
				break;
			case 2:
				if(!s1.pop(&x)) cout<<"Stack Underflow\n";
				else cout<<x<<"\n";
				break;
			case 3:s1.display();
				break;
			case 4:
				cout<<"Enter element : ";
				cin>>x;
				if(!s2.push(x)) cout<<"Stack Overflow\n";
				break;
			case 5:
				if(!s2.pop(&x)) cout<<"Stack Underflow\n";
				else cout<<x<<"\n";
				break;
			case 6:s2.display();
			break;
			case 7:cout<<(s1.compare(s2)?"Same\n":"Not same\n");
			break;
			case 0:break;
			default:cout<<"Invalid\n";
		}
	}while(opt != 0);
	return 0;
}


//Stack

bool Stack::push(int x){
	if(tos < STACK_MAX - 1){
		s[++tos] = x;
		return 1;
	}else{
		return 0;
	}
}

bool Stack::pop(int *x){
	if(tos > -1){
		*x = s[tos--];
		return 1;
	}else{
		return 0;
	}
}

void Stack::display(){
	if(tos > -1){
		cout<<"\n"<<tos+1<<" elements \n";
		if(tos+1 == STACK_MAX)
			cout<<"Stack Full\n";
		for(int i = 0; i <= tos; ++i){
			cout<<s[i]<<" ";
		}
		cout<<"\n";
	}else{
		cout<<"\nStack Empty\n";
	}
}

bool Stack::compare(Stack st){
	if(tos != st.tos){
		return 0;
	}else{
		for(int i = 0; i < tos; ++i){
			if(st.s[i] != s[i]){
				return 0;
			}
		}
	}
	return 1;
}
