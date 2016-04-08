#include "UkladRownanLiniowychh.hh"

using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy UkladRownanLiniowych, ktore zawieraja
 *  wiecej kodu niz dwie linijki. 
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
struct UkladRownan // wszysto co wizualnie wyowietla sie na ekranie
{
	Macierz M;
	Wektor b;
	//Wektor X;

};

istream& operator >>(istream& wejscie, UkladRownan Uklad) {
	cout << "wprowadz transponowana macierz wspolczynnikow ukladu rownan: "
			<< endl;
	cin >> Uklad.M;
	cout << "wprowadz transponowany wektor wyrazow wolnych: " << endl;
	cin >> Uklad.b;

	return wejscie;
}
ostream & operator <<(ostream wejscie, UkladRownan Uklad) {

	return wejscie;
}
