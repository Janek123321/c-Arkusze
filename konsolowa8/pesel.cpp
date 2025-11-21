#include <iostream>
#include <string>

using namespace std;


// ********************************************** 
// nazwa funkcji:   sprawdzPlec
// opis funkcji:    Funkcja sprawdza czy ostatnia cyfra podanego peselu jest parzysta czy nie i na tej podstawie ustala płeć właściciela peselu
// parametry:   zmienna typu string reprezentujaca pesel
// zwracany typ i opis:     char – 'K' oznacza kobietę, 'M' oznacza mężczyznę
// autor: nr zdajacego                  
// *********************************************** 
char sprawdzPlec(string pesel)
{

    if ((pesel[9] - '0') % 2 == 0)
        return 'K';

    else
        return 'M';
}

bool liczbaKontrolna(string pesel)
{

    int wagi[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};

    int S = 0;

    for (int i = 0; i < 10; i++)
    {
        S += (pesel[i] - '0') * wagi[i];
    }

    int M = S % 10;
    int R;

    (M == 0) ? R = 0 : R = 10 - M;

    if (R == (pesel[10] - '0'))
        return true;

    else
        return false;
}

int main()
{

    string pesel;

    cout << "Podaj pesel do sprawdzeia\n";
    cin >> pesel;

    (sprawdzPlec(pesel) == 'K') ? cout << "Kobieta" : cout << "Mezczyzna";
    cout << endl;

    (liczbaKontrolna(pesel)) ? cout << "Pesel poprawny" : cout << "Pesel niepoprawny ";

    return 0;
}