
#include<string>
#include <iostream>

using namespace std;

string szyfruj(string jawny, int klucz1)
{
	string zaszyfrowany;
	int literkaAscii=0;
	int klucz = klucz1 % 26;

	for (size_t i = 0; i < jawny.length(); i++)
	{
		if ((int)jawny[i] > 96 && (int)jawny[i] < 123)
		{
			literkaAscii = (int)jawny[i] + klucz;
		
		if (literkaAscii>122)
		{
			literkaAscii = literkaAscii - 26;
		}
		if (literkaAscii < 97)
		{
			literkaAscii = literkaAscii + 26;
		}
		}
		if (jawny[i]==' ')
		{
			literkaAscii = ' ';
		}
		zaszyfrowany += (char)literkaAscii;
		

		
	}
	return zaszyfrowany;
}
void danePodstawowe()
{
	//Test 1
	if (szyfruj("abc", 3) == "def")
		cout << "Test1 passed"<<endl;
	else
		cout << "Test1 failed"<<endl;
}
void zawijanie()
{
	//Test2
	if (szyfruj("xyz", 3) == "abc")
		cout << "Test2 passed" << endl;
	else
		cout << "Test2 failed" << endl;
}
void odszyfrowanie()
{
		//Test3
	if (szyfruj("def", -3) == "abc")
		cout << "Test3 passed" << endl;
	else
	cout << "Test3 failed" << endl;
}
void dlugiKlucz()
{
		//Test4
	if (szyfruj("abc", 29) == "def")
		cout << "Test4 passed" << endl;
	else
		cout << "Test4 failed" << endl;
}
void Spacja()
{
		if (szyfruj("ab cd", 2) == "cd ef")
		cout << "Test5 passed" << endl;
	else
		cout << "Test5 failed" << endl;
}


