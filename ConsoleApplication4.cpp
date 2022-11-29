#include <iostream>	
#include <vector>
using namespace std;
int main() {
	/////TABLICE/////
	//skladnia tablicy 1 wymiarowej
	//typ+przechowywany nazwa_tablicy[rozmiar]
	int tab[10];
	const int size = 10;
	int tab2[size]; //rozmiar moze byc okreslony jako stala
	string tab3[5];
	//operacje na tablicach
	tab3[0] = "many1";
	tab3[1] = "many2";
	tab3[2] = "many3";
	tab3[3] = "many4";
	tab3[4] = "many5";
	cout << tab3[0] << endl;
	cout << tab3[1] << endl;
	cout << tab3[2] << endl;
	cout << tab3[3] << endl;
	cout << tab3[4] << endl;
	//II sposob
	string tab4[4] = { "jeden","dwa","trzy" };
	cout << tab4[0] << endl;
	cout << tab4[1] << endl;
	cout << tab4[2] << endl;
	
	tab3[0] += " ++";
	cout << tab3[0] << endl;
	tab4[3] = tab3[2];
	cout << tab4[3] << endl;

	//tablice 2d
	//skladnia
	// typ_przechowywany nazwa_tablicy[rozmiar_wymiaru1][rozmiar_wymiaru2]

	string t1[3][2];
	//wypelnianie tablicy 2d
	t1[0][0] = "Jan";
	t1[0][1] = "Pawel";
	t1[1][0] = "Jan";
	t1[1][1] = "Kowalski";
	t1[2][0] = "Michal";
	t1[2][1] = "Nowak";

	cout << t1[0][0] <<" "<< t1[0][1] << endl;
	cout << t1[1][0] <<" "<< t1[1][1] << endl;
	cout << t1[2][0] <<" "<< t1[2][1] << endl;

	string t2[3][2] = {
		{"Jan","G"},
		{"Andrew","Tate"},
		{"Kenny","East"},

	};
	cout << t2[0][0] << " " << t2[0][1] << endl;
	cout << t2[1][0] << " " << t2[1][1] << endl;
	cout << t2[2][0] << " " << t2[2][1] << endl;

	//petla for w tablicach
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = 100+i;
		cout << a[i] << endl;
	}
	for (int x : a)
	{
		cout << x << endl;

	}

	//for dla tablic 2d
	for (int i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			cout << t2[i][j] << endl;
		}
	}

}
