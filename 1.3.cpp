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

bool czy_nudna(int a){
	int i=0, sprawdzana=a, suma=0;
	for(i=0; i<729; i++){
		suma=SumaKwCyfr(sprawdzana);
		if(suma==1)
			return true;
		sprawdzana=suma;
	}
	return false;
}

int main(int argc, char** argv) {
	cout<<czy_nudna(229);
	return 0;
}
