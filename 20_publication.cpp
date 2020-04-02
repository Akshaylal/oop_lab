// Module 3 
// Slide 58
#include <iostream>

using namespace std;

class Publication{
	char title[20];
	float price;
	
	protected:
		void getdata();
		void putdata();
};


class Book: public Publication{
	int page_count;
	
	public:
		void getdata();
		void putdata();
};


class CD: public Publication{
	int storage_space;
	
	public:
		void getdata();
		void putdata();
};


int main(){
	Book b;
	CD c;
	cout<<"Book :\n";
	b.getdata();
	cout<<"CD :\n";
	c.getdata();
	cout<<"Book :\n\n";
	b.putdata();
	cout<<"CD :\n";
	c.putdata();
	cout<<endl;
	return 0;
}

// Publication
void Publication::getdata(){
	cout<<"Title   : ";
	cin>>title;
	cout<<"Price   : ";
	cin>>price;
}

void Publication::putdata(){
	cout<<"\nTitle   : "<<title;
	cout<<"\nPrice   : "<<price;
}

// Book
void Book::getdata(){
	Publication::getdata();
	cout<<"Pages   : ";
	cin>>page_count;
}

void Book::putdata(){
	Publication::putdata();
	cout<<"\nPages   : "<<page_count;
}

// CD
void CD::getdata(){
	Publication::getdata();
	cout<<"Size    : ";
	cin>>storage_space;
}

void CD::putdata(){
	Publication::putdata();
	cout<<"\nSize    : "<<storage_space;
}
