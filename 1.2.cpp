#include <iostream>

using namespace std;

int SumaKwCyfr(int a){
	int w=0;
	while(a>0){
		w+=(a%10)*(a%10);
		a/=10;
	}
	
	return w;
}

int main(int argc, char** argv) {
	cout<<SumaKwCyfr(123);
	return 0;
}
