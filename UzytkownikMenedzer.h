#ifndef UZYTKOWNIKMENEDZER.H
#define UZYTKOWNIKMENEDZER.H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "PlikZUzytkownikami.h"
#include "MetodyPomocnicze.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikZUzytkownikami plikZUzytkownikami;
    int pobierzIdNowegoUzytkownika();


public:
    int pobierzIdZalogowanegoUzytkownika();
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami):plikZUzytkownikami(nazwaPlikuZUzytkownikami)
    {idZalogowanegoUzytkownika=0;
    uzytkownicy=plikZUzytkownikami.wczytajUzytkownikowZPliku();};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    bool czyUzytkownikJestZalogowany();
    void wylogowanieUzytkownika();
};

#endif // UZYTKOWNIKMENEDZER
