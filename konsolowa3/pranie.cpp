#include <iostream>
#include <string>
using namespace std;

class Urzadzenie
{
public:
    void komunikat(string komunikat)
    {
        cout << komunikat << endl;
    }
};

class Pralka : public Urzadzenie
{
private:
    int numerProgramu = 0;

public:
    int ustawNumerPrania(int numerPodany)
    {
        if (numerPodany > 0 && numerPodany <= 12)
        {
            numerProgramu = numerPodany;
            komunikat("Program zostal ustwiony");
        }
        else
        {
            numerProgramu = 0;
            komunikat("Podano niepoprawny numer programu");
        }
        return numerPodany;
    }
};

class Odkurzacz : public Urzadzenie
{
private:
    bool stanOdkurzacza = false;

public:
    void on()
    {
        if (stanOdkurzacza == false)
        {
            stanOdkurzacza = true;
            komunikat("Odkurzacz wlaczono");
        }
    }
    void off()
    {
        if (stanOdkurzacza == true)
        {
            stanOdkurzacza = false;
            komunikat("Odkurzacz wylaczono");
        }
    }
};

int main()
{
    Odkurzacz odkurzacz1;
    Pralka pralka1;
    int podanyNumer = 0;
    cout << "Podaj numer prania 1..12\n";
    cin >> podanyNumer;

    pralka1.ustawNumerPrania(podanyNumer);

    odkurzacz1.on();
    odkurzacz1.on();
    odkurzacz1.on();

    odkurzacz1.komunikat("Odkurzacz wyladowal sie");

    odkurzacz1.off();
    // cout<<pralka1.ustawNumerPrania(12);
    // cout<<pralka1.ustawNumerPrania(1);
    // cout<<pralka1.ustawNumerPrania(13);
    // cout<<pralka1.ustawNumerPrania(0);
    return 0;
}
