#include<iostream>
using namespace std;

void multiply(int *a, int *b, int *c, int m, int n, int z){
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			*(c+i*10+j) = 0;
			for(int k = 0; k < z; ++k){
				*(c+i*10+j) += *(a+i*10+k) * *(b+k*10+j);
			}
		}
	}
}



int main(){
	int a[10][10], b[10][10], c[10][10], m1, n1, m2, n2;
	cout<<"Enter first matrix m, n:\n";
	cin>>m1>>n1;
	cout<<"Enter first matrix :\n";
	for(int i = 0; i < m1; ++i){
		for(int j = 0; j < n1; ++j){
			cin>>a[i][j];
		}
	}
	cout<<"Enter second matrix m, n:\n";
	cin>>m2>>n2;
	cout<<"Enter second matrix :\n";
	for(int i = 0; i < m2; ++i){
		for(int j = 0; j < n2; ++j){
			cin>>b[i][j];
		}
	}
	if(n1 == m2){
		multiply(&a[0][0], &b[0][0], &c[0][0], m1, n2, n1);
		for(int i = 0; i < m1; ++i){
			for(int j = 0; j < n2; ++j){
				cout<<c[i][j]<<" ";
			}
			cout<<"\n";
		}
	}else{
		cout<<"Multiplication not possible\n";
	}
	return 0;
}
