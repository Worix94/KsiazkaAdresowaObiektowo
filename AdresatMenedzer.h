#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idOstatniegoAdresata;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){};
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> pobierzAdresatowUzytkownika();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void czyszczenieAdresatow();
    int dodajAdresata(int idOstatniegoAdresata,int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idOstatniegoAdresata,int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
};
