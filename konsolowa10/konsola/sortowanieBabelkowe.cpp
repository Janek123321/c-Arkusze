#include <iostream>
using namespace std;
void bubbleSort(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    for (int i = 0; i < liczbaElementowTablicy - 1; i++)
    {

        for (int j = 0; j < liczbaElementowTablicy - 1 - i; j++)
        {
            if (tablicaPrzeszukiwana[j] > tablicaPrzeszukiwana[j + 1])
            {
                temp = tablicaPrzeszukiwana[j];
                tablicaPrzeszukiwana[j] = tablicaPrzeszukiwana[j + 1];
                tablicaPrzeszukiwana[j + 1] = temp;
            }
        }
    }
}
void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 1001;
    }
}
void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << "; ";
    }
}
int main()
{
    int tablicaTestowa[100];
    wypelnij(tablicaTestowa, 100);
    cout << "Nieposortowana 100-elementowa tablica liczb pseudolosowych: ";
    wypisz(tablicaTestowa, 100);
    cout << endl;
    bubbleSort(tablicaTestowa, 100);
    cout << "Posortowana 100-elementowa tablica liczb pseudolosowych: ";
    wypisz(tablicaTestowa, 100);
    return 0;
}