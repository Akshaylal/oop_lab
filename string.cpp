#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[50], rstr[50];
	int n = 0, j, f = 1;
	cout<<"Enter string : ";
	cin>>str;
	while(str[n] != '\0' & n < 50){
		++n;
	}
	j = n;
	rstr[j--] = '\0';
	for(int i = 0; i < n; ++i){
		rstr[j--] = str[i];
	}
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
	cout<<"\n";
	return 0;
}
