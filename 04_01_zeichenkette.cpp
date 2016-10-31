#include <iostream>
#include <string>
using namespace std;

int main()
{
	string invertiert;

	cout << "Bitte geben Sie die Zeichenkette ein: ";
	getline(cin, invertiert);
	cout << "Die umgekehrte Zeichenkette lautet: ";
	for (int i = invertiert.size() - 1; i >= 0; i--)
	{
		cout << invertiert[i];
	}
	cout << endl;

	system("PAUSE");
	return 0;

}