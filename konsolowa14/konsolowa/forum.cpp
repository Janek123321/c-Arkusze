#include <iostream>
using namespace std;
class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancjiKlasy;
    Osoba()
    {
        id = 0;
        imie = "";
        liczbaInstancjiKlasy++;
    }
    Osoba(int podaneId, string podaneImie)
    {
        id = podaneId;
        imie = podaneImie;
        liczbaInstancjiKlasy++;
    }
    Osoba(const Osoba &osoba)
    {
        id = osoba.id;
        imie = osoba.imie;
        liczbaInstancjiKlasy++;
    }

    void wypiszImie(string podaneImie)
    {
        (imie != "") ? cout << "Cześć " << podaneImie << ", mam na imię " << imie : cout << "Cześć " << podaneImie << ", mam na imię Brak Danych";
    }
};
int Osoba::liczbaInstancjiKlasy = 0;
int main()
{
    string imie;
    int id;
    cout << "Liczba zarejestrowanych osob: " << Osoba::liczbaInstancjiKlasy << endl;
    Osoba osoba1;
    cout << "Podaj id dla osoby: \n";
    cin >> id;
    cout << "Podaj imie dla osoby: \n";
    cin >> imie;
    Osoba osoba2(id, imie);
    Osoba osoba3(osoba2);

    osoba1.wypiszImie("Jan");
    cout << endl;
    osoba2.wypiszImie("Jan");
    cout << endl;
    osoba3.wypiszImie("Jan");
    cout << endl;

    cout << "Liczba zarejestrowanych osob: " << Osoba::liczbaInstancjiKlasy << endl;

    return 0;
}