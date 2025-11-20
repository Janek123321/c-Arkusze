#include <iostream>
#include <string>
#include "../szyfr.h" // zmień ścieżkę jeśli trzeba

using namespace std;

void test1() {
    Szyfr s("abc", 3);
    string wynik = s.zaszyfruj();
    if (wynik == "def") cout << "Test 1 OK\n";
    else cout << "Test 1 BŁĄD: oczekiwano 'def', otrzymano '" << wynik << "'\n";
}

void test2() {
    Szyfr s("xyz", 3);
    string wynik = s.zaszyfruj();
    if (wynik == "abc") cout << "Test 2 OK\n";
    else cout << "Test 2 BŁĄD: oczekiwano 'abc', otrzymano '" << wynik << "'\n";
}

void test3() {
    Szyfr s("def", -3);
    string wynik = s.zaszyfruj();
    if (wynik == "abc") cout << "Test 3 OK\n";
    else cout << "Test 3 BŁĄD: oczekiwano 'abc', otrzymano '" << wynik << "'\n";
}

void test4() {
    Szyfr s("abc", 29);
    string wynik = s.zaszyfruj();
    if (wynik == "def") cout << "Test 4 OK\n";
    else cout << "Test 4 BŁĄD: oczekiwano 'def', otrzymano '" << wynik << "'\n";
}

void test5() {
    Szyfr s("ab cd", 2);
    string wynik = s.zaszyfruj();
    if (wynik == "cd ef") cout << "Test 5 OK\n";
    else cout << "Test 5 BŁĄD: oczekiwano 'cd ef', otrzymano '" << wynik << "'\n";
}

int main() {
    cout << "=== Testy jednostkowe klasy Szyfr ===\n";
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}
