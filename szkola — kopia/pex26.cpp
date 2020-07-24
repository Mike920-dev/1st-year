#include <iostream>
using namespace std;

int main(){
	//tytul programu
	cout << "Trojkat rownoramienny z gwiazdek" << endl << endl;
	
	//deklaracja zmiennych
	int liczba;
	
	//odebranie wartosci zmiennej
	do{
		cout << "Podaj liczbe z zakresu <1;20>" << endl;
		cin >> liczba;
		cout << endl;
	}while(liczba<1 or liczba>20);
	
	//generowanie trojkata
	for(int i=0;i<liczba;i++){
		for(int j=0;j<liczba*2;j++)
				if(j>=liczba-i and j<=liczba+i)
					cout << "* ";
				else
					cout << "  ";
		cout << endl;
	}
	
	return 0;
}