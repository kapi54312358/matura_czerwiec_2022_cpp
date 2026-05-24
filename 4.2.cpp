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

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0, max=0, i_max=0;
	int liczby_odbite[n], liczby[n];
	
	for(i=0; i<n; i++){
		we>>liczby[i];
		liczby_odbite[i]=odbicie(liczby[i]);
	}
	
	for(i=0; i<n; i++){
		if(abs(liczby_odbite[i]-liczby[i])>max){
			max=abs(liczby_odbite[i]-liczby[i]);
			i_max=i;
		}
	}
	
	cout<<liczby[i_max]<<" "<<max;
	
	return 0;
}
