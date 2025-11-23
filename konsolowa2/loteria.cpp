#include <iostream>
#include <random>
#include <string>
using namespace std;

void wypelnij(int tablica[][6], int ileLosow)
{
    // srand(time(NULL));
    random_device rd;                      // losowe ziarno
    mt19937 gen(rd());                     // generator Mersenne Twister
    uniform_int_distribution<> dis(1, 49); // zakres 1-49

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < ileLosow; j++)
        {
            tablica[j][i] = dis(gen); // rand() % 49 + 1;
        }
    }
}

// void czySiePowtarzaja(int tab[][6], int ileLosow)
// {
//     for (int i = 0; i < i; i++)
//     {
//         for (int j = 0; j < ileLosow; j++)                                       //TODO
//         {
//             tab[j][i] = dis(gen); // rand() % 49 + 1;
//         }
//     }
// }

void wypisz(int tablica[][6], int ileLosow)
{
    for (int i = 0; i < ileLosow; i++)
    {
        cout << "Losowanie " << i + 1 << ": ";
        for (int j = 0; j < 6; j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }
}

void szukaj(int tablica[][6], int ileLosow, int szukana)
{
    int ileWystapienSzukanej = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < ileLosow; j++)
        {
            if (tablica[j][i] == szukana)
            {
                ileWystapienSzukanej++;
            }
        }
    }
    cout << "Wystapienia liczby " << szukana << ": " << ileWystapienSzukanej << endl;
}

int main()
{
    int liczbaLosow = 11;
    int tab[11][6];

    wypelnij(tab, liczbaLosow);

    wypisz(tab, liczbaLosow);

    for (int i = 1; i < 50; i++)
    {
        szukaj(tab, liczbaLosow, i);
    }

    return 0;
}
