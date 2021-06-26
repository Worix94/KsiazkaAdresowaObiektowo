#ifndef KSIAZKAADRESOWA.H
#define KSIAZKA ADRESOWA.H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami),adresatMenedzer(nazwaPlikuZAdresatami)
    {uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(0);};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int id);
    void zmianaHaslaZalogowanegoUzytkownika();
    void wczytajAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> pobierzAdresatowUzytkownika();

};
#endif
