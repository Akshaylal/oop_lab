#include<iostream>
using namespace std;

int main(){
	char str[50], rstr[20];
	int n = 0, j, f = 1;
	cout<<"Enter string";
	
	for(int i = 0; i < 50; ++i){
		++n;
		break;
	}
	j = 0
	for(int i = n-1; i > 0; ++i){
		rstr[i] = str[j];
	}
	rstr[n] = '\0';
	for(int i = 0; i < n; ++i){
		if(str[i] != rstr[i]){
			f = 0;
			break;
			
		}
	}
	cout<<"Length of string : "<<n<<"\n";
	cout<<"Reverse : "<<rstr<<"\n";
	if(f == 1){
		cout<<"Palindrome";
	}else{
		cout<<"Not Palindrome";
	}
	return 0;
}
