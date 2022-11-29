#include <iostream>
using namespace std;
/*
///////operatory/////////
-arytmetyczne
	+ dodawanie
	- odejmowanie
	* mnozenie
	/ dzielenie
	% reszta z dzielenia liczb calkowitych
-logiczne
	|| lub logiczne
	&& i logiczne
	! negacja
-relacyjne
	< mniejsze niz
	> wieksze niz
	<= mniejsze rowne
	>= wieksze rowne
	== rowne
	!= rozny
*/
	int main()
{
	/*
	if(warune do sprawdzenia)
	{
	 kod wykonywany jesli warunek jest prawdziwy
	}
	*/
		/*
		auto x = 3; //definicja zmiennej x
		auto y = 10; //definicja zmiennej y

		if (x&&y<4||y>3)
		{
			cout << "zmienna x jest wieksza od 3" << endl;
		}
		else
		{
			cout << "zmienna x jest mniejsza lub rowna 3" << endl;
		}
		*/
		//rozwiazywanie rownania kwadratowego
		/*
		double a, b, c, delta, x1, x2, x3, x4, absdelta, xre, xim;
		cout << "rozwiazywanie rownania kwadratowego" << endl;
		cout << "podaj wartosc wspolczynnika a" << endl;
		cin >> a;//cin wczytuje wartosc z klawiatury
		cout << "podaj wartosc wspolczynnika b" << endl;
		cin >> b;
		cout << "podaj wartosc wspolczynnika c" << endl;
		cin >> c;
		delta = pow(b, 2) - 4 * a * c;
		if (delta > 0)
		{
			x1 = -b + sqrt(delta) / (2 * a);
			x2 = -b - sqrt(delta) / (2 * a);
			cout << "x1=" << x1 << " x2=" << x2 << endl;
		}
		else if (delta == 0)
		{
			x3 = -b / (2 * a);
			cout << x3 << endl;
		}
		else
		{
			absdelta = delta * -1;
			xre = -b / (2 * a);
			xim = sqrt(absdelta) / (2 * a);
			cout << xre << " - " << xim << " i" << endl;
			cout << xre << " + " << xim << " i" << endl;
		}
		*/
		//switch
		
		int warunek = 22;
		switch (warunek) 
		{
		case 1:
		{
			cout << "1" << endl;
			break;
		}
		case 4-2:
		{
			cout << "2" << endl;
			break;
		}
		case 3:
		{
			cout << "3" << endl;
			break;
		}
		default:
		{
			//skocztu:
			cout << "wszystko inne" << endl;
		
		}
		}
		
		//goto
		//omijamy jak ognia

		//goto skocztu;
		
}
