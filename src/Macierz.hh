#ifndef MACIERZ_HH
#define MACIERZ_HH
#include <iostream>

#include "Wektor.h"


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy. 
 */
class Macierz {
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */


	Wektor Kolumna[ROZMIAR];

    float operator() (int Wi, int Ko) const {return Kolumna[Ko][Wi];}
    float operator() (int Wi, int Ko) {return Kolumna[Ko][Wi];}

  public:
    const Wektor & operator[] (int Kol) const { return Kolumna[Kol]; }
    Wektor & operator[] (int Kol) { return Kolumna[Kol]; }
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
std::istream& operator >> (std::istream &wejscie, Macierz &Mac);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */



std::ostream& operator << (std::ostream &wyjscie, const Macierz &Mac);


#endif
