#include <iostream>
using namespace std;

// **********************************************
// azwa funkcji: najwiekszyWspolnyDzielnik;
// opis funkcji:   funkcja znajduje najwiekszy wspolny dzielnik dwuch calkowitych dodatnich liczb;
// parametry:
// liczba1 – parametr reprezentuje pierwsza z liczb ktorych szukany jest najwiekszy wspolny dzilenik;
// liczba2 – parametr reprezentuje druga z liczb ktorych szukany jest najwiekszy wspolny dzilenik;
// zwracany typ i opis: funkcja zwraca dodatnia liczbe calkowita ktora jest najwiekszym wspolnym dzielnikiem dwuch podanych liczb;
// autor:   <numer zdającego>
// *********************************************
int najwiekszyWspolnyDzielnik(int liczba1, int liczba2)
{
    while (liczba1 != liczba2)
    {
        if (liczba1 > liczba2)
        {
            liczba1 = liczba1 - liczba2;
        }
        else
        {
            liczba2 = liczba2 - liczba1;
        }
    }
    return liczba1;
}
int main()
{
    int liczba1, liczba2;
    do
    {
        cout << "Podaj pierwsza dodatnia liczbe calkowita: \n";
        cin >> liczba1;
        cout << "Podaj druga dodatnia liczbe calkowita: \n";
        cin >> liczba2;
    } while (liczba1 <= 0 || liczba2 <= 0);
    cout << najwiekszyWspolnyDzielnik(liczba1, liczba2);
    return 0;
}