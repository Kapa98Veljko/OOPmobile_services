#ifndef KORISNIK_H
#define KORISNIK_H
#include"Broj.h"
#include"Exceptions.h"
#include"Usluga.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Korisnik {
public:
	//Korisnik(const int broj_telefona) :broj_telefona_(broj_telefona) {}; Ovo su oni uradaili na  dugi nacin DAKLE SVE CEO BROJ KAO KLASA SE PROSLEDI KONSTRUKTORU
	Korisnik(const Broj& ) ;
	~Korisnik();
	//Ovo sada treba kada se doda treba stavljati u vector ili list npr
	//Ovde se u potpisu funkcije ne mora navesti koji parametar uzima referencu ili pokazivac ali .cpp fajlu je potrebno
	void evidentirajPoziv(const Broj& ,const int) ;
	void evidentirajPoruku(const Broj& ,const string& ) ;
	void pisi() const;
private:
	Broj broj_telefona_;
	vector<Usluga*> usluga_;

};
#endif //! KORISNIK_H