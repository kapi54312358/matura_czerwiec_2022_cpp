#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int const n=100;

int odbicie(int a){
	int w=0, i=0, b=0, kopia_a=a;
	long long pot=1;
	
	while(kopia_a>10){
		pot*=10;
		kopia_a/=10;	
	}
	
	while(a>0){
		b=a%10;
		w+=b*pot;
		pot/=10;
		a/=10;
	}
	
	return w;
}

bool czy_pierwsza(int a){
	int i=2;
	if(a<=1) return false;
	
	for(i=2; i*i<=a; i++){
		if(a%i==0) return false;
	}
	
	return true;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0;
	int liczby_odbite[n], liczby[n];
	
	for(i=0; i<n; i++){
		we>>liczby[i];
		liczby_odbite[i]=odbicie(liczby[i]);
	}

	for(i=0; i<n; i++){
		if(czy_pierwsza(liczby[i]) && czy_pierwsza(liczby_odbite[i])){
			cout<<liczby[i]<<endl;
		}
	}
	
	return 0;
}
