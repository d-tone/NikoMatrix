#ifndef WEKTOR_H
#define WEKTOR_H
 
#include <iostream>
#include "rozmiar.h"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor {
	/*
	 *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
	 */

	float Wsp[ROZMIAR];


	float operator &(const Wektor& V2) const;
	float IloczynSkal(Wektor& V1, Wektor& V2);
public:
	const float& operator[](int Ind) const {
		return Wsp[Ind];
	}
	float & operator[] (int Ind) {
		return Wsp[Ind];
	}

	/*
	 *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
	 */
};

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
std::istream& operator >>(std::istream& wejscie, Wektor& W);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
std::ostream& operator <<(std::ostream& wyjscie,const Wektor& W);

float IloczynSkal(const Wektor & V1, const Wektor& V2);
//float operator *(const Wektor & V1, const Wektor & V2) {
//	return IloczynSkal(V1, V2);
//}
// -------------------------------------------------------------------------------------------------------------------------------------

Wektor& operator *(const Wektor & V1, const float d);

float operator +(const Wektor & V1, const Wektor & V2);

float operator +(const Wektor & V1, const float d);

float operator -(const Wektor & V1, const Wektor & V2);

float operator -(const Wektor & V1, const float d);

float operator /(const Wektor & V1, const float d);

#endif
