#include <iostream>
#include <string>
using namespace std;

class Tablica
{
    int liczbaElementowTablicy;
    int *tablica;

public:
    Tablica(int rozmiarPodany)
    {
        liczbaElementowTablicy = rozmiarPodany;
        tablica = new int[liczbaElementowTablicy];
        srand(time(nullptr));
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            tablica[i] = rand() % 1000 + 1;
        }
    }

    void wyswietl()
    {
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            cout << i << ": " << tablica[i] << endl;
        }
    }

    int szukaj(int szukanaCyfra)
    {
        bool wystapienia = false;
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            if (tablica[i] == szukanaCyfra)
            {
                cout << "liczba " << szukanaCyfra << " jest na indeksie: ";
                return i;
            }
        }
        cout << "podana liczba nie zostala wylosowana ";
        return -1;
    }

    int nieParzyste()
    {
        cout << "Liczby nieparzyste: " << endl;
        int ileWszystkichNieparzystych = 0;
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            if (tablica[i] % 2 != 0)
            {
                cout << tablica[i] << endl;
                ileWszystkichNieparzystych++;
            }
        }
        cout << "Wszystkich niparzystych: ";
        return ileWszystkichNieparzystych;
    }

    int sredniaArytmetyczna()
    {
        int suma = 0;
        for (int i = 0; i < liczbaElementowTablicy; i++)
        {
            suma = suma + tablica[i];
        }
        cout << "Srednia arytmetyczna wszytskich liczb: ";
        return suma / liczbaElementowTablicy;
    }
};

int main()
{
    Tablica tablica1(1000);

    tablica1.wyswietl();
    cout << tablica1.nieParzyste() << endl;
    cout << tablica1.szukaj(413) << endl;
    cout << tablica1.sredniaArytmetyczna();
    return 0;
}
