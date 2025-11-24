#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Muzyka
{
public:
    string artist;
    string album;
    int songsNumber;
    int year;
    int downloadNumber;
    string temp;
};

void wczytaj(vector<Muzyka> &wektor)
{
    ifstream plik("Data.txt");
    if (!plik)
    {
        cout << "Blad\n";
        return;
    }

    while (true)
    {
        Muzyka m;

        if (!getline(plik, m.artist))
            break;              // 1
        getline(plik, m.album); // 2

        string line;
        if (!getline(plik, line))
            break; // 3
        m.songsNumber = stoi(line);

        getline(plik, line); // 4
        m.year = stoi(line);

        getline(plik, line); // 5
        m.downloadNumber = stoll(line);

        getline(plik, line); // 6 -> pusta linia między rekordami

        wektor.push_back(m);
    }
}

// **********************************************
// nazwa metody:    wypisz
// opis metody:    funkcja wypisuje wszystkie pola klasy kazdego obiektu znajdujacego sie w wektorze
// parametry:   vector<Muzyka> wektor - funkcja pobiera parametr ktorym jest wektor obiektow klasy Muzyka
// zwracany typ i opis:     brak
// autor:    <numer zdającego>
// ***********************************************
void wypisz(vector<Muzyka> wektor)
{
    for (int i = 0; i < wektor.size(); i++)
    {

        cout << wektor[i].artist << endl;
        cout << wektor[i].album << endl;
        cout << wektor[i].songsNumber << endl;
        cout << wektor[i].year << endl;
        cout << wektor[i].downloadNumber << endl;
        cout << endl;
    }
}

int main()
{
    // fstream plik;
    // plik.open("dane.txt", ios::in);

    vector<Muzyka> wektor;

    wczytaj(wektor);

    wypisz(wektor);

    return 0;
}
