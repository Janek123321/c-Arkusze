#include <iostream>

using namespace std;

// ******************************************************
//   nazwa klasy: <Film>
//   pola:  tytul - zmienna typu napisowego przechowujaca tytul filmu;
//          liczba wypozyczen - zmeinna typu liczbowego przechowujaca liczbe wypozyczen filmu;
//   metody:   setTytul, metoda nie zwraca żadnej wartości - metoda ustawia tytul filmu na podany jako argument podczas wywolania funkcji
//             getTytul, metoda zwraca tytul filmu - metoda typu string zwraca tytul filmu;
//             getLiczbaWypozyczen(), metoda zwraca liczbe wypozyczen filmu - metoda typu integer zwraca liczbe wypozyczen filmu;
//             inkrementuj(), metoda nie zwraca żadnej wartości - jest to metoda która inkrementuje liczbe wypozyczen filmu obiektu dla ktorego została wywołana;
//   informacje:  Klasa reprezentuje film i pozwala zazadzac danymi o danym filmie w wypozyczalni filmów;
//   autor:       <numer zdającego>
//  *****************************************************
class Film
{
protected:
    string tytul = "";
    int liczbaWypozyczen = 0;

public:
    void setTytul(string podanyTytul)
    {
        tytul = podanyTytul;
    }

    string getTytul()
    {
        return tytul;
    }

    int getLiczbaWypozyczen()
    {
        return liczbaWypozyczen;
    }

    void inkrementuj()
    {
        liczbaWypozyczen++;
    }
};

int main()
{
    Film film1;
    cout << "Zawartosc pola tytul dla nowego obiektu film1: " << film1.getTytul() << endl;
    cout << "Zawartosc pola liczbaWypozyczen dla nowego obiektu film1: " << film1.getLiczbaWypozyczen() << endl;

    film1.setTytul("Matrix");
    cout << "Zawartosc pola tytul po wywolaniu funkcji setTytul() dla obiektu film1: " << film1.getTytul() << endl;

    cout << "Zawartosc pola liczbaWypozyczen przed uzyciem metody inkrementuj na obiekcie film1: " << film1.getLiczbaWypozyczen() << endl;
    film1.inkrementuj();
    cout << "Zawartosc pola liczbaWypozyczen po uzyciu metody inkrementuj na obiekcie film1: " << film1.getLiczbaWypozyczen();

    return 0;
}
