
#include <iostream>
using namespace std;

void F1(int x)
{
	cout << &x<<" void" << endl;
	x = -100;
}
void F1(int*x)
{
	cout << x <<" void2" << endl;
	*x = -100;
}


int main()
{
	string xd = "aweadsa";
	int xd2 = 13;
	
	cout << xd << endl;
	cout << xd2 << endl;
	cout << &xd << endl;
	cout << &xd2 << endl;
	int* wsk = &xd2;
	cout << *wsk << endl;
	cout << &wsk << endl;
	int* wsk2 = NULL; //jezeli chcemy zrobic pusty wskaznik nalezy usrawic go na wartosc null-adres bezpieczny
	cout << wsk2 << endl;
	int* wsk3 = nullptr;
	cout << wsk3 << endl;
	string wsk4;
	cout << wsk4 << endl;
	double wsk5=NULL;
	cout << wsk5 << endl;
	bool wsk6= true;
	cout << wsk6 << endl;
	*wsk = 105;
	cout << xd2 << endl;
	cout << &xd2 << endl;
	int z1 = 50;
	cout << z1 << endl;
	cout << &z1<<" check" << endl;
	F1(z1);
	cout << z1 << endl;
	int z2 = 99;
	cout << z2 << endl;
	cout << &z2 <<" check2" << endl;
	int* wskz2 = &z2;
	F1(wskz2);
	cout << z2 << endl;
	cout << " " << endl;
	cout << "////////////////////////////////////////////////////////////////////////////////////" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;

	int tab[5] = { 1,2,3,4,5 };
	cout << "sposob zwykly" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout<< tab[i] <<endl;
	}
	
	
	cout << " " << endl;
	cout << " " << endl;
	cout << tab << endl;//nazwa tablicy jest jednoczesnie adresem jej zerowego elementu
	cout << " " << endl;
	cout << " " << endl;
	
	
	for (int* i = tab; i < tab + 5 ;i++)
	{

		cout << (int)i << endl;
		cout << *i << endl;
		
	}
	//wskaznik powinien byc tego samego typu co zmienna, na ktora wskazuje
	double tab2[5] = { 1.1,2.2,3.3,4.4,5.5 };
	for (double*i = tab2; i < tab2 + 5; i++)
	{

		cout << (int)i << endl;
		cout << *i << endl;

	}


	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	//dynamiczna alokacja pamieci 
	int* zd = new int;
	*zd = 5;
	cout << *zd << endl;
	cout << &zd << endl;

	delete zd;
	cout << &zd << endl;

	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	
	int size = 5;
	int* tabd = new int[size];
	tabd[0] = 6;
	cout << tabd[0] << endl;
	cout << *tabd << endl;
	delete[] tabd;


	int** tab2d = new int* [5];
	tab2d[0] = new int[5];
	tab2d[1] = new int[5];
	tab2d[2] = new int[5];
	tab2d[3] = new int[5];
	tab2d[4] = new int[5];
	tab2d[0][0] = 111;
	cout<< tab2d[0][0] << endl;
	delete[] tab2d[0];
	delete[] tab2d[1];
	delete[] tab2d[2];
	delete[] tab2d[3];
	delete[] tab2d[4];
	delete[] tab2d;
	

}

