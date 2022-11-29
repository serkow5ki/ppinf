
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	/////////////Wektory//////////
	vector<int>v1; //wektor v1 przechowujacy wartosci int aktualnie pusty
	vector<int>v2(50); //wektor 50 elementowy pusty
	vector<int>v3(4, 100); // 4 elementy o wartosci 100
	vector<int>v4(v3);//taki sam jak v3
	vector<int>v5{ 5,10,15 }; //3 elementowy o wartosciach 5, 10, 15
	vector<int>v6 = { 5,10,15 }; // to samo co v5
	v3.insert(v3.begin() + 1, 200);
	for (int i = 0; i < 4; i++) {

		cout << v3[i] << endl;
	}

}

