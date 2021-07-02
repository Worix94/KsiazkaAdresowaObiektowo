#ifndef PLIKZADRESATAMI.H
#define PLIKZADRESATAMI.H

#include <iostream>
#include <vector>
#include <fstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy{
    Adresat adresat;
    int idOstatniegoAdresata;
    string nazwaPlikuZAdresatami;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void AktualizujPlikPoUsunieciu(vector<Adresat> &adresaci,int idUsunietegoAdresata);
    int podajIdWybranegoAdresata();
    void AktualizujPlikPoEdytowaniu(Adresat adresat);
public:
    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {nazwaPlikuZAdresatami=pobierzNazwePliku();};
    bool dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunAdresata(vector <Adresat> &adresaci);
    void edytujAdresata(vector <Adresat> &adresaci);
    void AktualizujIdOstaniegoAdresata();
};

#endif
