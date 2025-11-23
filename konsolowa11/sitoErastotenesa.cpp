#include <iostream>
// #include <cmath>
using namespace std;

void sito(int tablica[])
{
    int wartoscIndex = 0;
    for (size_t i = 0; i < 99; i++)
    {
        if (tablica[i] != 0)
        {
            wartoscIndex = tablica[i];
            for (int j = i + wartoscIndex; j < 99; j += wartoscIndex)
            {
                tablica[j] = 0;
            }
        }
    }
}

// ******************************************************* 
//   nazwa funkcji:       wypelnij();
//   parametry wejściowe: tablicaDoWypelnienia[] - przechowuje tablice liczb calkowitych ktora ma zostac wypelniona;
//                        liczbaElementowTablicy - przechowuje liczbe calkowita reprezentujaca liczbe elementow tablicy do wypelnienia;
//   wartość zwracana:    funkcja nie zwraca wartosci;
//   informacje:          funkcja wypelnij() wypelnia podana w parametrze funkcji tablice liczb calkowitych licbami od 2 do 100; 
//   autor:               <numer zdającego> 
//  **************************************************** 
void wypelnij(int tablicaDoWypelnienia[], int liczbaElementowTablicy)
{
    for (int i = 2; i <= liczbaElementowTablicy; i++)
    {
        tablicaDoWypelnienia[i - 2] = i;
    }
}

void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}

void wypiszLiczbyPierwsze(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        if (tablicaDoWypisania[i] != 0)
        {
            cout << tablicaDoWypisania[i] << " ";
        }
    }
}
int main()
{
    int tablicaTestowa[99];
    wypelnij(tablicaTestowa, 100);
    cout << "Tablica po wypelnieniu liczbami z przedzialu 2-100: \n";
    wypisz(tablicaTestowa, 99);
    cout << endl;
    sito(tablicaTestowa);
    cout << "Tablica po zastosowaniu funckji implementujacej dzialanie algorytmu sita Erastotenesa: \n";
    wypiszLiczbyPierwsze(tablicaTestowa, 99);

    return 0;
}