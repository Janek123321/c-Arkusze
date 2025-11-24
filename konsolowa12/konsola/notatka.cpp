#include <iostream>
using namespace std;

// ***********************************************
//   klasa:  Notatka
//   opis:  Klasa reprezentuje Notatke i pozwala na tworzenie notatek z automatycznie inkrementowanym id, dowolna trescia i tytulem;
//   pola: liczbaNotatek - przechowuje liczbe utworzonych notatek;
//         id - przechowuje numer identyfikacyjny notatki;
//         tytulNotatki - prechowuje tytul notatki;
//         trescNotatki - przechowuje tresc notatki;
//   autor:  <numer zdającego>
// ************************************************
class Notatka
{
private:
    static int liczbaNotatek;
    int id;

protected:
    string tytulNotatki;
    string trescNotatki;

public:
    Notatka(string tytulPodany, string trescPodana)
    {
        liczbaNotatek++;
        id = liczbaNotatek;
        tytulNotatki = tytulPodany;
        trescNotatki = trescPodana;
    }

    void wyswietlTrestITytul()
    {
        cout << "Tytul notatki: " << tytulNotatki << "; Tresc notatki: " << trescNotatki << endl;
    }

    void wyswietlPolaKlasy()
    {
        cout << id << "; " << liczbaNotatek << "; " << tytulNotatki << "; " << trescNotatki << endl;
    }
};
int Notatka::liczbaNotatek = 0;
int main()
{

    Notatka notatka1("Pierwszy dzien w szkole", "Dzisiaj bylem pierwszy raz w nowej szkole");
    Notatka notatka2("Czwartek 12/01/2025", "Dzisija czulem sie bardzo dobrze");

    cout << "dzialanie metody wypisujacej tresc i tytul dla obiektu notatka1: \n";
    notatka1.wyswietlTrestITytul();
    cout << "dzialanie metody wypisujacej tresc i tytul dla obiektu notatka2: \n";
    notatka2.wyswietlTrestITytul();

    cout << "Dzialanie metody wypisujacej wysztkie pola klasy Notatka dla obiektu notatka1: \n";
    notatka1.wyswietlPolaKlasy();
    cout << "Dzialanie metody wypisujacej wysztkie pola klasy Notatka dla obiektu notatka2: \n";
    notatka2.wyswietlPolaKlasy();
    return 0;
}