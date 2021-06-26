#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "AdresatMenedzer.h"

using namespace std;

int AdresatMenedzer::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    idOstatniegoAdresata=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci,idZalogowanegoUzytkownika);
}

int AdresatMenedzer::pobierzIdOstatniegoAdresata()
{
    return idOstatniegoAdresata;
}

vector<Adresat> AdresatMenedzer::pobierzAdresatowUzytkownika()
{
    return adresaci;
}



