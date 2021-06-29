#ifndef KSIAZKAADRESOWA.H
#define KSIAZKA ADRESOWA.H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami),NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {adresatMenedzer=NULL;};

    ~KsiazkaAdresowa(){
    delete adresatMenedzer;
    adresatMenedzer=NULL;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int id);
    void zmianaHaslaZalogowanegoUzytkownika();
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> pobierzAdresatowUzytkownika();
    void wyswietlWszystkichAdresatowUzytkownika();
    void dodajAdresata();
    void wylogowanieUzytkownika();

};
#endif
