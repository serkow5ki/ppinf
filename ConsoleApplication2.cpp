#include "Nagłówek.h"
using namespace std;
int main()
{
	/*int a,b;
	cout << "petla while" << endl;
	cout << "podaj liczbe znakow \"*\" do wyswietlenia " << endl;
	cin >> a;
	//petla while 
	while (a>0)
	{
		cout << "*" << endl;
		a--;
	}
	*/
	//do-while
	
/*	char znak;

	do 
	{
		cout << "petla do-while" << endl;
		cout << "podaj znak z klawiatury, znak \"!\" konczy dzialanie petli" << endl;
		cin >> znak;
	} while (znak != '!');
*/

//petla for 
	/*
	cout << "petla for" << endl;
	cout << "ilu leci pasazerow ? " <<endl;
	int ilu;
	cin >> ilu;
	int i = 1;
	for (; i <= ilu; i++)
	{
		cout << "pasazer nr: " << i << " prosze zapiac pasy" << endl;
	}
	cout << i << endl;
	*/
	/*int x = 1;
	int y = 1;
	cout << x++ << endl;
	cout << ++y << endl;
	*/

	/*
	for (int i = 1, j = 1; i < 5 && j < 29; i++, j++)
	{
		cout << "cos" << endl;
	}
	*/

	//unsigned int x1= -10;
	//cout << x1 << endl;
	/*for (; x1 >= 0; x1--)
	{
		cout << x1;
	}*/

	//zakresowa petla for
	vector<double>wektor = { 1.4,5.2,6.10,29.9,7.4 };
	for (double z1 : wektor)
	{
		cout << z1 << endl;
	}
}

