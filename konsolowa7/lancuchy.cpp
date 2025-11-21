#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;
/************************************************
  klasa:  Lancuchy
  opis:   Klasa narzędziowa do przetwarzania łańcuchów znaków.
          Zawiera metody statyczne do liczenia samogłosek w podanym ciągu
          oraz usuwania podwójnych znaków znajdujących się obok siebie.
  metody: policzSamogloski(const wstring &podanyCiagZnakow) - zwraca liczbę samogłosek w podanym ciągu
          bezPodwojonych(string podanyCiagZnakow) - zwraca ciąg bez powtarzających się obok siebie znaków
  autor:  <nrZdajacego>
************************************************/
class Lancuchy
{
public:
    static int policzSamogloski(const wstring &podanyCiagZnakow)
    {
        int liczbaSamoglosek = 0;

        const wstring samogloski = L"aąeęiouóyAĄEĘIOUÓY";

        for (size_t i = 0; i < podanyCiagZnakow.length(); i++)
        {
            for (size_t j = 0; j < samogloski.length(); j++)
            {
                if (podanyCiagZnakow[i] == samogloski[j])
                {
                    liczbaSamoglosek++;
                }
            }
        }

        if (liczbaSamoglosek > 0)
        {
            return liczbaSamoglosek;
        }
        else
        {
            return 0;
        }
    }

    static string bezPodwojonych(string podanyCiagZnakow)
    {
        string zmienionyCiag = "";
        zmienionyCiag += podanyCiagZnakow[0];
        for (int i = 1; i < podanyCiagZnakow.length(); i++)
        {
            if (podanyCiagZnakow[i] != podanyCiagZnakow[i - 1])
            {
                zmienionyCiag += podanyCiagZnakow[i];
            }
        }

        return zmienionyCiag;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "");
    SetConsoleOutputCP(1250);
    SetConsoleCP(1250);

    string podaj = "";
    string samogloski = "aąeęiouóyAĄEĘIOUÓY";

    cout << "Podaj ciag znakow a metoda usuna podwojne znaki znajdujace sie obok siebie:\n";
    getline(cin, podaj);

    cout << Lancuchy::bezPodwojonych(podaj) << endl;

    wstring s;

    cout << "Podaj ciag znakow a metoda policzy smaogloski\n";
    getline(wcin, s);

    cout << Lancuchy::policzSamogloski(s);

    cout << endl;

    return 0;
}