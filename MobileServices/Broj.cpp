#include "Broj.h"

Broj::Broj(const string& kod_drzave, const string& pozivni_broj, const string& broj_telefona, Tip& tip):kod_drzave_(kod_drzave),pozivni_broj_(pozivni_broj),broj_telefona_(broj_telefona),tip_(tip){}

bool Broj::istaDrzava(Broj& b)
{
	return kod_drzave_==b.kod_drzave_;
}

void Broj::pisi() const
{
	cout << "+" << kod_drzave_ << ' ' << pozivni_broj_ << broj_telefona_ << endl;
}

bool Broj::fiksni() const
{
	return tip_ == FIKSNI;
}
