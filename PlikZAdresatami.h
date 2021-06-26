#ifndef PLIKZADRESATAMI.H
#define PLIKZADRESATAMI.H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class PlikZAdresatami
{
    const string nazwaPlikuZAdresatami;
    bool czyPlikJestPusty();
    Adresat adresat;
public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(vector<Adresat> &adresaci,int idZalogowanegoUzytkownika);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
};

#endif
