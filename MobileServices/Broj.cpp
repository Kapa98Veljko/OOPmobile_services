#include "Broj.h"


bool Broj::istaDrzava(const Broj& b) const
{
	return kod_drzave_==b.kod_drzave_;
}

void Broj::pisi() const
{
	cout << "+" << kod_drzave_ << ' ' << pozivni_broj_ << broj_telefona_ ;
}

bool Broj::fiksni() const
{
	return tip_ == FIKSNI;
}
