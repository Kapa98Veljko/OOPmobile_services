#ifndef USLUGA_H
#define USLUGA_H
#include "Broj.h"
#include"Exceptions.h"
#include<iostream>

class Usluga {
public:
	Usluga(const Broj& broj_od, const Broj& broj_ka) :broj_od_(broj_od), broj_ka_(broj_ka) {};

	virtual void pisi() const ;
	virtual double cena() const=0;

protected:
	 Broj broj_od_;
	 Broj broj_ka_;
};

const int uspostavljanjeVezeIno = 30;
const int minutRazgovoraIno = 50;
const int minutRazgovoraDom = 10;
const int uspostavljanjeVezeDom = 0;
const int zapocetiMinutIno = 25;
const int zapocetiMinutDom = 12;
class Poziv :public Usluga {
public:
	Poziv(const Broj& broj_od, const Broj& broj_ka,int trajanje):Usluga(broj_od, broj_ka),trajanje_(trajanje){};
	virtual double cena() const override;
	virtual void pisi() const override;
private:
	int trajanje_;
};
const int cenaSlanjaDom = 3;

const int cenaSlanjaIno = 20;
class Poruka:public Usluga {
public:
	Poruka(const Broj& , const Broj& , const string& );
	virtual void pisi() const override;
	virtual double cena()const override;
private:
	string msg_;
};
#endif //