#ifndef KSIAZKAADRESOWA.H
#define KSIAZKA ADRESOWA.H

#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami):uzytkownikMenedzer(nazwaPlikuZUzytkownikami)
    {uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(0);};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int id);
    void zmianaHaslaZalogowanegoUzytkownika();
};
#endif
