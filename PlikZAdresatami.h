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
    Adresat adresat;
    int idOstatniegoAdresata;

    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void AktualizujPlikPoUsunieciu(vector<Adresat> adresaci,int IsUsunietegoAdresata);
    int podajIdWybranegoAdresata();
    void AktualizujPlikPoEdytowaniu(Adresat adresat);
public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
    bool dopiszAdresataDoPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunAdresata(vector <Adresat> &adresaci);
    bool czyPlikZAdresatamiJestPusty();
    void edytujAdresata(vector <Adresat> &adresaci);
};

#endif
