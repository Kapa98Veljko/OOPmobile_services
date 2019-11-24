#include "Usluga.h"
#include<iostream>
using namespace std;


void Usluga::pisi() const
{
	broj_od_.pisi();
	cout << "->";
	broj_ka_.pisi();
}

double Poziv::cena() const
{
	int cena = 0;
	if (trajanje_ == 0) { return 0; }
	if (broj_od_.istaDrzava(broj_ka_)) {
		cena += uspostavljanjeVezeDom;
		cena += (trajanje_ / 60 + 1)*zapocetiMinutDom;
		return cena;
	}
	else {
		cena += uspostavljanjeVezeIno;
		cena += (trajanje_ / 60 + 1)*zapocetiMinutIno;
		return cena;
	}


	return 0.0;
}

void Poziv::pisi() const
{
	Usluga::pisi();//Poziv neke funkcije iz klase (ne iz nekog kokretnog objekta) je preko prostora imena sa /::/
	cout <<"("<< trajanje_ / 60 << ":" << trajanje_ % 60 << ")" << endl;
}

Poruka::Poruka(const Broj& broj_od, const Broj& broj_ka, const string& tekst):Usluga(broj_od,broj_ka),msg_(tekst)
{//ODMDAH SADA ZELIM DA PROVERIM DA LI MOGU DA KONSTRUISEM PORUKU AKO NIJEDA OD BROJEVA NIJE FIKSNI 
 //POSTO OVDE SADA  PRAVIM TRY-CATCH BLOK IMA PRA PRAVILA
	try
	{
		if (broj_od_.fiksni() || broj_ka_.fiksni()) throw NeuspeloSlanjePoruke("Poruku nije moguce posalti jer je jedan od brojev fiksni!!!");
	}
	catch (NeuspeloSlanjePoruke & se) 
	{
	}
}

void Poruka::pisi() const
{
	Usluga::pisi();
	std::cout << msg_ << std::endl;
}

double Poruka::cena() const
{
	if (broj_od_.istaDrzava(broj_ka_)) {
		return cenaSlanjaDom;
	}
	else {
		return cenaSlanjaIno;
	}
	
}
