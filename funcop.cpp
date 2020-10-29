// funcop.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include<math>
#define N 100
using namespace std;

int f( int i) {
	cout << "this is f()" << endl;
	return i;
}

int main( int argc, char ** argv ) {
	int i,a,b;
	i = f(47);
	printf("i is %d\n", i);
	
	a=N/100;
	b=N*100;
	printf(a*b);
	
	return 0;
}
