#include <iostream>
using namespace std;

int main(){
	//tytul programu
	cout << "Trojkat prostokatny z gwiazdek" << endl << endl;
	
	//deklaracja zmiennych
	int liczba;
	
	//odebranie wartosci zmiennej
	do{
		cout << "Podaj dlugosc przyprostokatnej" << endl;
		cin >> liczba;
		cout << endl;
	}while(liczba<1 or liczba>20);
	
	//generowanie trojkata
	for(int i=1;i<=liczba;i++){
		for(int j=0;j<i;j++)
			cout << "* ";
		cout << endl;
	}
	
	return 0;
}
