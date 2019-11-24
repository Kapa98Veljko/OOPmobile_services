#include "Broj.h"
#include "Korisnik.h"

int main() {

	Broj broj1("381", "63", "1234567", Broj::MOBILNI);
	Broj broj2("381", "64", "1234567", Broj::MOBILNI);
	Broj broj3("381", "11", "1234567", Broj::FIKSNI);
	Broj broj4("384", "71", "1234567", Broj::FIKSNI);
	Broj broj5("384", "96", "1234567", Broj::MOBILNI);

	Korisnik korisnik(broj1);

	korisnik.evidentirajPoziv(broj2, 121);
	korisnik.evidentirajPoruku(broj3, "Zdravo");
	korisnik.evidentirajPoruku(broj5, "Sta radis?");

	korisnik.pisi();

	return 0;
}