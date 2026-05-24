#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int const n=100;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int liczby_odbite[n], liczby[n], liczba_wyst[n];
	int i=0, j=0, raz=0, dwa=0, trzy=0;
	
	for(i=0; i<n; i++){
		we>>liczby[i];
		liczba_wyst[i]=0;
	}

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(liczby[i]==liczby[j])
				liczba_wyst[i]++;
		}
	}
	
	for(i=0; i<n; i++){
		if(liczba_wyst[i]==1)
			raz++;
		if(liczba_wyst[i]==2)
			dwa++;
		if(liczba_wyst[i]==3)
			trzy++;
	}
	dwa/=2;
	trzy/=3;
	raz+=dwa+trzy;
	
	cout<<raz<<" "<<dwa<<" "<<trzy;
	
	return 0;
}
