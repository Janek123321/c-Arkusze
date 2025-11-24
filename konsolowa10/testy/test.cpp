#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// --- Kopia funkcji z programu głównego ---
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
        srand(time(NULL) + i);
        tablicaDoWypełnienia[i] = rand() % 1001;
    }
}

bool czyPosortowana(int t[], int n)
{
    for(int i = 0; i < n - 1; i++)
        if(t[i] > t[i+1])
            return false;
    return true;
}

// --- TEST sortowania ---
int main()
{
    const int N = 50;
    int tab[N];

    wypelnij(tab, N);
    cout << "Wylosowane liczby:\n";
    for(int i = 0; i < N; i++) cout << tab[i] << " ";
    cout << "\n\n";

    bubbleSort(tab, N);

    cout << "Po sortowaniu:\n";
    for(int i = 0; i < N; i++) cout << tab[i] << " ";
    cout << "\n\n";

    if(czyPosortowana(tab, N))
        cout << "TEST OK – tablica jest posortowana rosnąco.\n";
    else
        cout << "TEST FAIL – tablica NIE jest posortowana!\n";

    return 0;
}
