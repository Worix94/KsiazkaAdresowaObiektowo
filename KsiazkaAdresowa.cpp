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
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(uzytkownikMenedzer.logowanieUzytkownika());
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika(int id)
{
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(id);
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

int KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    int idOstatniegoAdresata=adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    return idOstatniegoAdresata;
}

int KsiazkaAdresowa::pobierzIdOstatniegoAdresata()
{
    return adresatMenedzer.pobierzIdOstatniegoAdresata();
}

vector<Adresat> KsiazkaAdresowa::pobierzAdresatowUzytkownika()
{
    return adresatMenedzer.pobierzAdresatowUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatowUzytkownika()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa::czyszczenieAdresatow()
{
    adresatMenedzer.czyszczenieAdresatow();
}

int KsiazkaAdresowa::dodajAdresata(int idOstatniegoAdresata,int idZalogowanegoUzytkownika)
{
    idOstatniegoAdresata=adresatMenedzer.dodajAdresata(idOstatniegoAdresata,idZalogowanegoUzytkownika);
    return idOstatniegoAdresata;
}
