#include <iostream>
using namespace std;

int main(){
    
	cout << "Rozklad liczby na czynniki pierwsze" << endl << endl;
	
	int liczba;
	
	do{
		cout << "Podaj liczbe naturalna wieksza od jeden" << endl;
		cin >> liczba;
	}while(liczba<1);
	
	cout << endl << "Dzielnikami liczby " << liczba << " sa: ";
	
	for(int i=2;i<=liczba;i++){
		bool decyzja=true;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				decyzja=false;
				break;
			}
		}
		if(decyzja)
			while(liczba%i==0){
				cout << i << ' ';
				liczba/=i;
			}
	}
	
	return 0;
}

