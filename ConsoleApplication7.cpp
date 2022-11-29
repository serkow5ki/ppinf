
#include <iostream>
#include <vector>
using namespace std;
//unie
union unia {
	int c;
	double z;
};
union unia2 {
	int d;
	int e;
};

//struktury
struct workers {

	string imie="anon";
	string nazwisko="anon";
	int id=0;
public: //domyslnie wszystkie zmienne i funkcje sa publiczne w strukturze 
	int data_zatrudnienia=00000000;
	double wynagrodzenie=1000.00;

	void wd() {
		cout << "imie: " << imie << endl;
		cout << "nazwisko: " << nazwisko << endl;
		cout << "id: " << id << endl;
		cout << "utrzymanie: " << wynagrodzenie << endl;
		cout << "data zatrudnienia: " << data_zatrudnienia << endl;
	}

};
void monkeypopup(workers W) {	
	cout << "imie: " << W.imie << endl;
	cout << "nazwisko: " << W.nazwisko << endl;
	cout << "id: " << W.id << endl;
	cout << "utrzymanie: " << W.wynagrodzenie << endl;
	cout << "data zatrudnienia: " << W.data_zatrudnienia << endl;
}


int main()
{

	workers slave1, slave2, slave3,slave0;
	//wypelnianie struktury sopsob I
	slave1 = {
		"Jan",
		"Pawel",
		2,
		20112022,
		2500.50

	};
	//sposob II
	slave2.id = 1;
	slave2.imie = "Jakub";
	slave2.nazwisko = "Grabowski";
	slave2.data_zatrudnienia = 21112022;
	slave2.wynagrodzenie = 3004.20;

	slave3.id = 3;
	slave3.imie = "Krzychu";
	slave3.nazwisko = "Nowak";
	slave3.data_zatrudnienia = 22112022;
	slave3.wynagrodzenie = 1500.05;

	//wyswietlanie
	cout <<"imie: " << slave1.imie << endl;
	cout <<"nazwisko: " << slave1.nazwisko << endl;
	cout <<"id: " << slave1.id << endl;
	cout <<"utrzymanie: "<< slave1.wynagrodzenie << endl;
	cout << "data zatrudnienia: "<< slave1.data_zatrudnienia << endl;
	cout << " " << endl;
	monkeypopup(slave2);
	cout << " " << endl;
	monkeypopup(slave3);
	cout << " " << endl;
	slave0.wd();
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	//unie
	unia u1;
	u1.c = 5;
	cout << u1.c << endl;
	u1.z = 1.2;
	cout << u1.z << endl;
	cout << " " << endl;
	cout << "int size: " << sizeof(int) << endl;
	cout << "double size: " << sizeof(double) << endl;
	cout << "float size: " << sizeof(float) << endl;
	cout << "string size: " << sizeof(string) << endl;
	cout << "struct size: " << sizeof(workers) << endl;
	cout << "union size: " << sizeof(unia) << endl;
	
	unia u2, u3, u4, u5,u6;
	u4.z = 88.88;
	vector<unia> wu;
	wu.push_back(u2);
	wu.push_back(u3);
	wu.push_back(u4);
	wu.push_back(u5);
	wu.push_back(u6);
	cout << wu[2].z << endl;
	cout << "rozmiar wektora uni: " << sizeof(wu) << endl;

	int a = 2147483647;
	int b = a * 2;
	cout << a << endl;
	cout << b << endl;

	unia2 u21;
	u21.d = 4294967296;
	cout << u21.d << endl;
	u21.e = 25323;
	cout << u21.e << endl;
	cout << "union size: " << sizeof(unia2) << endl;




}
