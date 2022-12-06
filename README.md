# ppinf
#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	/*
	//zapis do pliku
	ofstream File1;//zmienne reprezentujace pliki piszemy z duzej litery
	File1.open("Plik1.txt");
	if (File1.is_open())
	{
		cout << "jest git" << endl;
		string cz;
		cin >> cz;
		File1 << cz << endl;
		
		
	}
	else
	{
		cout << "cos nie smiga" << endl;
	}
	File1.close();
	*/
	/*
	ofstream File2;
	File2.open("Plik2.txt");
	if (File2.is_open())
	{
		cout << "jest git" << endl;
		string z;
		getline(cin, z);//getline wczytuje cale zdanie
		File2 << z << endl;
	}

	else
	{
		cout << "cos nie smiga" << endl;
	}
	File2.close();
	*/
	ofstream File3;
	File3.open("Plik3.txt",ios::app);
	if (File3.is_open())
	{
		cout << "jest git" << endl;
		string x;
		getline(cin, x);//getline wczytuje cale zdanie
		File3 << x << endl;
	}

	else
	{
		cout << "cos nie smiga" << endl;
	}
	File3.close();
	
	const int y = 10;
	int e = 1;
	double d = (double)e;
	

	ifstream File4("ToRead.txt");
		File4.open("ToRead.txt");
		if (File4.is_open()) 
		{
			cout << "odczyt z pliku" << endl;
			string tr;
			while (getline(File4, tr))
			{
				cout << tr << endl;
			}
			File4.close();
		}
		ofstream File5;
		File3.open("Plik5.txt", ios::app);
}
