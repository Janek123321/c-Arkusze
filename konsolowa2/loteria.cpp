#include <iostream>
#include <string>
using namespace std;

class Loteria
{
public:
    int ileZestawow = ;
    int tablicaWynikow[6][ileZestawow];
    Loteria(int ileZestawowP )
    {
        ileZestawow = ileZestawowP;   
    }
    Loteria()
    {
        ileZestawow = 0;
    }

    void wypelnij()
    {
         srand(time(NULL));
        rand() % 101;
    }
};

int main(){

    return 0;
}

