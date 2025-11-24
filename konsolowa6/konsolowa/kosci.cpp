#include <iostream>
#include <vector>
using namespace std;

class Kosci
{
public:
    int ileRzutow;
    vector<int> wynikiRzutow;

    Kosci(int ileRzutowP)
    {
        ileRzutow = ileRzutowP;
    }

    //     ************************************************
    //   nazwa:    losuj
    //   opis:    metoda losuje liczbe z przedzialu 1 - 6 i wstawia do wektora z wynikami rzutów
    //   parametry:   brak
    //   zwracany typ i opis:   brak
    //   autor:     <numer zdającego>
    // ************************************************
    void losuj()
    {
        srand(time(NULL));
        for (int i = 0; i < ileRzutow; i++)
        {
            int los = rand() % 6 + 1;
            wynikiRzutow.push_back(los);
        }
    }

    int liczPunkty()
    {
        int liczbaPunktow = 0;
        int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;

        for (size_t i = 0; i < wynikiRzutow.size() - 1; i++)
        {
            if (wynikiRzutow[i] == 1)
                one++;

            if (wynikiRzutow[i] == 2)
                two++;

            if (wynikiRzutow[i] == 3)
                three++;

            if (wynikiRzutow[i] == 4)
                four++;

            if (wynikiRzutow[i] == 5)
                five++;

            if (wynikiRzutow[i] == 6)
                six++;
        }

        if (one > 1)
            liczbaPunktow = liczbaPunktow + (1 * one);

        if (two > 1)
            liczbaPunktow = liczbaPunktow + (2 * two);

        if (three > 1)
            liczbaPunktow = liczbaPunktow + (3 * three);

        if (four > 1)
            liczbaPunktow = liczbaPunktow + (4 * four);

        if (five > 1)
            liczbaPunktow = liczbaPunktow + (5 * five);

        if (six > 1)
            liczbaPunktow = liczbaPunktow + (6 * six);

        cout << "Liczba uzyskanych punktow: ";
        return liczbaPunktow;
    }

    void wypiszLosy()
    {
        for (int i = 0; i < wynikiRzutow.size(); i++)
        {
            cout << "Kostka " << i + 1 << ": " << wynikiRzutow[i] << endl;
        }
    }
};

int main()
{
    char czyGracDalej;
    do
    {
        int ileRzucicKostek = 0;

        do
        {
            cout << "Ile kostek chcesz rzucic?(3-10)\n";
            cin >> ileRzucicKostek;
        } while (ileRzucicKostek < 3 || ileRzucicKostek > 10);

        Kosci kosci1(ileRzucicKostek);
        kosci1.losuj();
        kosci1.wypiszLosy();

        cout << kosci1.liczPunkty() << endl;

        cout << "Jeszcze raz? (t/n)";
        cin >> czyGracDalej;

    } while (czyGracDalej == 't');

    return 0;
}