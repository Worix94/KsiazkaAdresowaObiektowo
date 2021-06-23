#ifndef UZYTKOWNIK.H
#define UZYTKOWNIK.H


#include <iostream>

using namespace std;


class Uzytkownik
{
    int id;
    string login, haslo;

public:
    void ustawID(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};

#endif // UZYTKOWNIK
