#include <iostream>
#include <string>
using namespace std;

int main()
{
	int b, h;
	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ";
	cin >> b;
	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ";
	cin >> h;
	for (int ih = 1; ih <= h; ih++)
	{
		if (ih > 1)
		{
			for (int pkt = 1; pkt < ih; pkt++)
				cout << ".";
			cout << "*";
		}
		else
			cout << "*";

		for (int ib = 2; ib <= b; ib++)

		{

			if (ih < 2 || ih == h)
				cout << "*";
			else if (ib == b)
				cout << "*";
			else
				cout << "+";
		}
		cout << endl;
	}
	cout << endl;

	system("PAUSE");
	return 0;
}