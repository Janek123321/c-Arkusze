#include <iostream>
#include <string>
using namespace std;

class Szyfr
{
public:
    string tekstDoZaszyfrowania;
    int klucz;
    Szyfr(string tekstDoZaszyfrowaniaP, int kluczP)
    {
        tekstDoZaszyfrowania = tekstDoZaszyfrowaniaP;
        klucz = kluczP;
    }
    Szyfr()
    {
        tekstDoZaszyfrowania = "";
        klucz = 0;
    }

    string zaszyfruj()
    {
        string zaszyfrowanyTekst = "";
        int asci = 0;
        char litera = 'a';
        for (int i = 0; i < tekstDoZaszyfrowania.length(); i++)
        {
            litera = tekstDoZaszyfrowania[i];
            asci = (int)litera;
            if (asci > 96 && asci < 123)
            {
                asci = asci + klucz;
                if (asci > 122)
                {
                    asci = asci - 26;
                }
                else if (asci < 97)
                {
                    asci = asci + 26;
                }
                litera = (char)asci;
            }
            zaszyfrowanyTekst = zaszyfrowanyTekst + litera;
        }
        return zaszyfrowanyTekst;
    }
};

