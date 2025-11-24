#include "szyfrHeader.h"

int main()
{
    int klucz;
    string tekst;
    // danePodstawowe();
    // zawijanie();
    // odszyfrowanie();
    // dlugiKlucz();
    // Spacja();
//ten kod uruchamiamy trzy razy z kluczem:0,ujemnym(duzym).,dodatnim(duzym)
//za kazdym razem robimy screen
    cout << "podaj tekst do zaszyfrowania" << endl;
  
    getline(cin,tekst);
    cout <<endl<< "podaj klucz" << endl;
    cin >> klucz;
    cout<<endl<<"tekst zaszyfrowany"<<endl;
    cout<<szyfruj(tekst,klucz);
    return 0;
}
