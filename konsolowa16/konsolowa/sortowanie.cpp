#include <iostream>
using namespace std;

class Sortowanie
{
public:
    int tablica[10];

    Sortowanie()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "Podaj " << i + 1 << " element tablicy do posortowania \n";
            cin >> tablica[i];
        }
    }

    void wypisz()
    {
        for (int x : tablica)
            cout << x << " ";

        cout << endl;
    }

    /********************************************************
     * nazwa funkcji:       sortuj
     * parametry wejściowe: brak
     * wartość zwracana:    funkcja nic nie zwraca. Sortuje malejaco 10-elementowa tablice;
     * autor:               <numer PESEL zdającego>
     * ****************************************************/
    void sortuj()
    {
        for (int i = 0; i < 10 - 1; i++)
        {
            int maxIndex = i;
            for (int j = i + 1; j < 10; j++)
            {
                if (tablica[j] > tablica[maxIndex])
                {
                    maxIndex = j;
                }
            }
            if (maxIndex != i)
            {
                swap(tablica[i], tablica[maxIndex]);
            }
        }
    }

    int getMax()
    {
        return szukajMax();
    }

private:
    /********************************************************
     * nazwa funkcji:       szukajMax
     * parametry wejściowe: brak
     * wartość zwracana:    zwraca maksymalna wartosc z 10-elementowej tablicy
     * autor:               <numer PESEL zdającego>
     * ****************************************************/
    int szukajMax()
    {
        int max = tablica[0];
        for (int i = 0; i < 10; i++)
        {
            if (max < tablica[i])
            {
                max = tablica[i];
            }
        }
        return max;
    }
};

int main()
{
    Sortowanie tablica1;
    tablica1.sortuj();
    cout << "Posortowana tablica :\n";
    tablica1.wypisz();
    cout << "Maksymalna watosc w tablicy: \n"
         << tablica1.getMax();
    return 0;
}