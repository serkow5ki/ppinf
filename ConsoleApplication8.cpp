
#include <iostream>
using namespace std;

/*template<class/typename nazwa+typu>
nazwa_typu nazwafunkcji(arg1,arg2...)*/
//SFC-SzablonFunkcji
template<class x>
x SFC98(x z1, x z2)
{
    return(z1 > z2) ? z1 : z2;
}
template<typename x>
x SFC11(x z1, x z2)
{
    return(z1 > z2) ? z1 : z2;
}

template<typename x>
double SFCzjtz(x z1, x z2) //z jawnym typem zwracanym
{
    return (z1 < z2) ? z1 : z2;
}
template<typename r>
struct S
{

    r x;
    double y;
    string z;

    void Px(r z)
    {
        x = z;
    }
    r Printx()
    {
        return x;
    }

    S(r z) {
        x = z;
    }
    S() {
     
    }
};

int main()
{
    int z1 = 4, z2 = 18;
    double z3 = 4.56, z4 = 18.5;
    cout << "szaboln funkcji c98: " << SFC98(z1, z2) << endl;
    cout << "szaboln funkcji c98: " << SFC98(z3, z4) << endl;
    cout << "szaboln funkcji c11: " << SFC11(z1, z2) << endl;
    cout << "szaboln funkcji c11: " << SFC11(z3, z4) << endl;
    cout << "szaboln funkcji c11 z jawnym wskazaniem typu do szablonu: " << SFC11<int>(z3, z4) << endl;
    cout << "szaboln funkcji c11 z jawnym wskazaniem typu do szablonu: " << SFCzjtz<int>(z3, z4) << endl;
    cout << "szaboln funkcji c11 z jawnym wskazaniem typu do szablonu: " << SFCzjtz<float>(z3, z4) << endl;

    S<int>s1(5);
        s1.x = 5;
        s1.y = 54.5;
        s1.z = "tekst";
        cout << "wartosc x w strukturze: " << s1.x << endl;
        cout << "wartosc y w strukturze: " << s1.y << endl;
        cout << "wartosc z w strukturze: " << s1.z<< endl;
        S<char>s2('J');
        s2.x = 'k';
        s2.y = 12.45;
        s2.z = "tststststs";
        string txt = "tekst do struktury";
        S<string>s3("cos");
        s3.Px(txt); // = s3.x=txt;
        cout << "szablon funkcji wewnatrz szablonu struktury do zwracania zmiennej x : " << s3.Printx() << endl;
        S<S<int>>s4(11);
        s4.x = s1;
        s4.y = 3.44;
        s4.z = "t x t";
        cout << "struktura w strukturze" << s4.x.x << endl;
        cout << "struktura w strukturze" << s4.Printx().Printx() << endl;

        //Struktura dzialajaca na wskaznikach
       // S<int*>s5(&z1); //sposob I na stworzenie struktury s5
        S<int*>* s5 = new S<int*>(&z1);
        //s5.x = &z1;
        cout << "wskaznik w strukturze: " <<*s5->x << endl;
        delete s5;
        
        
}
