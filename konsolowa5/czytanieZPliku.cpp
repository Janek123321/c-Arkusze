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

// void wczytaj(vector<Muzyka> &wektor)
// {
//     fstream plik;
//     plik.open("Data.txt", ios::in);
//     if (plik.good())
//     {
//         while (!plik.eof())
//         {
//             Muzyka muzyka1;

//             getline(plik, muzyka1.artist);
//             getline(plik, muzyka1.album);
//             plik >> muzyka1.songsNumber;
//             plik >> muzyka1.year;
//             plik >> muzyka1.downloadNumber;
//             getline(plik, muzyka1.temp);

//             wektor.push_back(muzyka1);
//         }
//     }
//     else
//     {
//         cout << "Blad";
//     }
// }

void wczytaj(vector<Muzyka> &wektor)
{
    ifstream plik("Data.txt");
    if (!plik) {
        cout << "Blad\n";
        return;
    }

    while (true)
    {
        Muzyka m;

        if (!getline(plik, m.artist)) break;     // 1
        getline(plik, m.album);                  // 2
        
        string line;
        if (!getline(plik, line)) break;         // 3
        m.songsNumber = stoi(line);

        getline(plik, line);                     // 4
        m.year = stoi(line);

        getline(plik, line);                     // 5
        m.downloadNumber = stoll(line);

        getline(plik, line);                     // 6 -> pusta linia między rekordami

        wektor.push_back(m);
    }
}

void wypisz(vector<Muzyka> wektor)
{
    for (int i = 0; i < wektor.size(); i++)
    {

        cout << wektor[i].artist << endl;
        cout << wektor[i].album << endl;
        cout << wektor[i].songsNumber << endl;
        cout << wektor[i].year << endl;
        cout << wektor[i].downloadNumber << endl;
        cout<<endl;
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
