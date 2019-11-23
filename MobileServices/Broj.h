#ifndef BROJ_H
#define BROJ_H
#include<iostream>
#include<string>
using namespace std;

class Broj {
public:
	enum Tip {MOBILNI,FIKSNI};
	Broj(const string& kod_drzave, const string& pozivni_broj, const string& broj_telefona, Tip& tip) ;
	bool istaDrzava(Broj& b);
	void pisi() const;
	bool fiksni()const;
private:
	string kod_drzave_;
	string pozivni_broj_;
	string broj_telefona_;
	Tip tip_;
};
#endif //BROJ_H
