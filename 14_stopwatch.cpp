#include <iostream>
#include <ctime>


using namespace std;


class Stopwatch{
	float t;
	clock_t start_t, end_t;
	
	public:
		void start();
		void stop();
		void show();
		Stopwatch(){t = 0;}
		~Stopwatch(){show();}
};


int main(){
	Stopwatch s;
	s.start();
	for(int i = 0; i < 100000; ++i)
		for(int j = 0; j < 10000; ++j);
	s.stop();
	s.show();
	return 0;
}

// stopwatch 

void Stopwatch::start(){
	start_t = clock();
	cout<<"Started\n";
}

void Stopwatch::stop(){
	end_t = clock() - start_t;
	t = (float)end_t / CLOCKS_PER_SEC;
	cout<<"Stopped\n";
}

void Stopwatch::show(){
	cout<<t<<" s\n";
}
