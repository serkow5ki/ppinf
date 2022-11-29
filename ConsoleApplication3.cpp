#include <iostream>
using namespace std;
/*
typ_zwracany nazwa_funkcji(typ_argumentu nazwa_argumentu,...)
{
    ciało funkcji
}
*/
//definicje funkcji w C++98
double Dodaj(double a, double b) //arg formalny
{
    return a + b;
}
void Wyswietl()
{
    cout << "asd" << endl;
    //w przypadku funkcji void nie moze wystapic return
}
//definicje funkcji w C++11
auto DodajC11(int a, int b)-> auto {
    return a + b;
}
double Mnozenie1(double, double);//deklaracja nie musi posiadac argumentow 

//mechanizm przeciazania funkcji
int Mnozenie(int x, int y) {
    return x * y;

}
double Mnozenie(double x, double y) {
    return x * y;
}
double Mnozenie(double x, double y, double z) {
    return x * y*z;

}
//funkcja z wartosciami domniemanymi (domyslnymi)
int Domniemane(int x =10, int y=5, int z=3) {
    return x - y * z;
}

inline double Wlinii(double x, int y) {
    return x * y;
}

//wysylanie argumentow do funkcji
void PrzezWartosc(int x, int y)
{
    x = 100;
    y = 100;
    cout <<"w funkcji " << x << endl;
    cout << "w funkcji " << y << endl;

}
void PrzezReferencje(int& x, int& y)
{
    x = 100;
    y = 100;
    cout << "w funkcji2 " << x << endl;
    cout << "w funkcji2 " << y << endl;
}
int main()

{
    Wyswietl();
    double a, b;
    cin >> a;
    cin >> b;
   cout <<"dodawanie = " << DodajC11(a, b) << endl; //arg aktualne
   cout<<"mnozenie = " << Mnozenie1(a, b) << endl;
   cout << "mnozenie przeciazenie = " << Mnozenie(4, 1) << endl;
   cout << "mnozenie przeciazenie = " << Mnozenie(4.7, 1.4) << endl;
   cout << "mnozenie przeciazenie = " << Mnozenie(4.7, 1.4,2.6) << endl;
   cout << "wartosci domniemane = " << Domniemane()<<endl;
   cout << "w lini = " << Wlinii(4.2, 3) << endl;
   
   int z1 = 4, z2 = 2;
   cout << z1 <<" "<< z2<<endl;
   PrzezReferencje(z1,z2);
   cout << z1 << " " << z2 << endl;
   PrzezWartosc(z1,z2);
   cout << z1 << " " << z2 << endl;

   
   
   return 0;
}
double Mnozenie1(double a, double b)
{
    return a * b;
}
