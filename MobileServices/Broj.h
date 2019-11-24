#ifndef BROJ_H
#define BROJ_H
#include<iostream>
#include<string>
using namespace std;

class Broj {
public:
	enum Tip {MOBILNI,FIKSNI};
	Broj(const string& kod_drzave, const string& pozivni_broj, const string& broj_telefona, Tip tip) :kod_drzave_(kod_drzave), pozivni_broj_(pozivni_broj), broj_telefona_(broj_telefona), tip_(tip) {};
	bool istaDrzava(const Broj& b) const;//Ovo mi nije bas najjasnije dakle neki objekata sam vezao za referencu i tako je prosledi 
	void pisi() const;//Omogucava da se nece menjati polja objekta a i posto sam klasi  usluga prosledio citav obejkat
	bool fiksni()const;//Takodje
private:
	//Da bi se izeglo duplo inicijalizovanje prvi put sa slucajnom vrednoscu pa onda sa nekom prosledjenom inicijalizaciiju vresim u inicijalizacionoj listi
	string kod_drzave_;
	string pozivni_broj_;
	string broj_telefona_;
	Tip tip_;
};
#endif //BROJ_H
