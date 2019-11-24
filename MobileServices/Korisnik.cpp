#include "Korisnik.h"

Korisnik::Korisnik(const Broj& broj_telefona):broj_telefona_(broj_telefona){}

Korisnik::~Korisnik()
{
	//Napredna for petlja
	//Dakle uzima iz vektroa usluga_ pokazivac i dodeljuje ga iteratoru usluga
	for (Usluga* usluga : usluga_) { delete usluga; }
}

void Korisnik::evidentirajPoziv(const Broj& broj_ka, const int trajanje) {
	usluga_.push_back(new Poziv(broj_telefona_,broj_ka,trajanje));
	std::cout << "Uspesno evidentiran poziv!" << std::endl;
	usluga_.back()->pisi();
	cout << endl;
}

void Korisnik::evidentirajPoruku(const Broj& broj_ka, const string& tekst)
{
	//Ovde moze da nastane problem jer je u igru ukljucen i konstruktor Poruke 
	try
	{
	 
			usluga_.push_back(new Poruka(broj_telefona_, broj_ka, tekst));
			std::cout << "Uspesno evidentiranje pouke!!" << endl;
			usluga_.back()->pisi();
			std::cout<<endl;

		
	}
	catch (NeuspeloSlanjePoruke & se) 
	{
		std::cout << se.what() << std::endl;
	}
}

void Korisnik::pisi() const 
{
	//std::cout<<broj_telefona_.pisi() << endl;
	//ovo bi ovde prijavio gresku jer jer ovo broj_telefona_pisi() vec u sebi ima cout!!!
	std::cout << "Evidencija poziva i poruka:" << std::endl;
	std::cout << "Korisnik : "  ;
	broj_telefona_.pisi(); std::cout << std::endl;
	int cena = 0;
	for (Usluga* usluga : usluga_) 
	{
		usluga->pisi();
		cena += usluga->cena();
		std::cout << std::endl;

	}
	std::cout << "Ukupna cena je :" << cena << std::endl;


}
