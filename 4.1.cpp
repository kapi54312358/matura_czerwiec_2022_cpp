#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=100;

int odbicie(string a){
	int w=0, i=0;
	long long pot=1;
	char b=0;
	
	for(i=0; i<a.size()-1; i++){
		pot*=10;
	}
	
	for(i=a.size()-1; i>=0; i--){
		b=a[i]-'0';
		w+=b*pot;
		pot/=10;
	}
	
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0;
	int liczby_odbite[n];
	string liczby[n];
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		liczby_odbite[i]=odbicie(liczby[i]);
		if(liczby_odbite[i]%17==0)
			cout<<liczby_odbite[i]<<endl;
	}
	
	return 0;
}
