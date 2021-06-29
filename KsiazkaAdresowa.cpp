#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer= new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::pobierzIdOstatniegoAdresata()
{
    return adresatMenedzer -> pobierzIdOstatniegoAdresata();
}

vector<Adresat> KsiazkaAdresowa::pobierzAdresatowUzytkownika()
{
    return adresatMenedzer ->pobierzAdresatowUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatowUzytkownika()
{
    adresatMenedzer -> wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) adresatMenedzer -> dodajAdresata();
    else {cout<<"Aby dodac adresata nalezy najpierw sie zalogowac"<<endl;system("pause");}
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer=NULL;
}
