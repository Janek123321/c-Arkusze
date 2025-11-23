#include <iostream>
#include <vector>

using namespace std;

void wypelnij(vector<int> &tab)
{
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        tab.push_back(rand() % 100 + 1);
    }
}

// ******************************************************
//   nazwa funkcji: pierwszeWystapienie
//   argumenty:     tab - przechowuje tablice do przeszukania
//                  szukana - przechowuje podana przez uzytkownika liczbe ktora zostaje szukana w tablicy
//   typ zwracany: int - w zaleznosci czy szukana zostala znaleziona funkcja zwraca indeks na ktorym znajduje sie szukana, lub w przypadku dojscia do wartownika zwraca -1;
//   informacje: funkcja dodaje na koniec tablicy wartownika, a nastepnie przeszukuje tablice. Jesli szukana zostanie znaleziona sprawdza na ktorym indeksie i na tej podstawie wiemy czy byl to wartownik czy nie. Zwraca -1 jesli dojdzie do wartownika lub indeks jesli natrafi wczesniej na szukana ;
//   autor:     <numer zdającego>
//*****************************************************
int pierwszeWystapinie(vector<int> tab, int szukana)
{
    tab.push_back(szukana);
    int i = 0;
    while (tab[i] != szukana)
    {
        i++;
    }

    if (i == tab.size() - 1)
    {
        return -1;
    }
    else
    {
        return i;
    }
}

void wypisz(vector<int> tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << ", ";
    }
}

int main()
{
    int szukana;
    vector<int> tab;
    wypelnij(tab);

    cout << "Podaj szukana \n";
    cin >> szukana;

    int czyZnaleziono = pierwszeWystapinie(tab, szukana);

    wypisz(tab);
    if (czyZnaleziono == -1)
    {
        cout << "\nNie znaleziono szukanej wartosci w tablicy";
    }
    else
    {
        cout << "\nZnaleziono podana wartosc: " << szukana << ", na indeksie: " << czyZnaleziono;
    }

    return 0;
}