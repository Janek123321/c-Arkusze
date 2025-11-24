#include <iostream>
#include <random>
#include <string>
using namespace std;

void wypelnij(int tablica[][6], int ileLosow)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 49);

    for (int i = 0; i < ileLosow; i++)
    {
        int ileWylosowano = 0;

        while (ileWylosowano < 6)
        {
            int liczba = dis(gen);

            // sprawdzamy, czy już była w danym zestawie
            bool powtarzaSie = false;
            for (int k = 0; k < ileWylosowano; k++)
            {
                if (tablica[i][k] == liczba)
                {
                    powtarzaSie = true;
                    break;
                }
            }

            if (!powtarzaSie)
            {
                tablica[i][ileWylosowano] = liczba;
                ileWylosowano++;
            }
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

// **********************************************
// nazwa funkcji:   wypisz
// opis funkcji:    funkcja wypisuje wyniki wszystkich przeprowadzonyhc losow
// parametry:   int tablica[][6] - dwuwymiarowa tablica o x wierszach i 6 kolumnach; Przechowuje wyniki losow;
// int ileLosow - parametr jest liczba ile zestawow losujemy;
// zwracany typ i opis:    brak;
// autor:   <numer zdającego> ;
// **********************************************
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
    int liczbaLosow;
    cout << "Podaj ile zestawow wylosowac \n";
    cin >> liczbaLosow;

    // dynamiczna tablica 2D
    int (*tab)[6] = new int[liczbaLosow][6];

    wypelnij(tab, liczbaLosow);
    wypisz(tab, liczbaLosow);

    for (int i = 1; i < 50; i++)
    {
        szukaj(tab, liczbaLosow, i);
    }

    delete[] tab;

    return 0;
}

