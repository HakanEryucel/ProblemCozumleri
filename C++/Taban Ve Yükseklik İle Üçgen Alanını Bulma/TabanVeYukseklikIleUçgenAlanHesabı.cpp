/************************************************************
*	TABAN VE YÜKSEKLİĞİ BİLİNEN BİR ÜÇGENİN ALANINI HESAPLAMA
*		Author: Hakan Eryücel
*************************************************************/
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");

	double taban, yukseklik, hipotenus;

	cout << "Hipotenüs uzunluğunu bulmak istediğiniz üçgenin sırasıyla taban ve yükseklik değerlerini giriniz\t";
	cin >> taban >> yukseklik;
	system("cls");
	hipotenus = taban * yukseklik / 2;
	cout << "Taban ve yükseklik değerlerini girdiğiniz üçgenin hipotenüsü = " << hipotenus << endl;

	system("pause");
	return 0;
}

