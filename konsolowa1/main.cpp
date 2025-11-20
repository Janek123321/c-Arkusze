#include <iostream>
#include "szyfr.h"
using namespace std;

int main() {
    string szyfrPodany;
    int kluczPodany;

    cout << "Podaj slowo do zaszyfrowania: \n";
    getline(cin, szyfrPodany);
    cout << "Podaj klucz: \n";
    cin >> kluczPodany;

    Szyfr szyfr1(szyfrPodany, kluczPodany);
    cout << szyfr1.zaszyfruj();

    return 0;
}
