/************************************************
*	BİR ÜÇGENDE SİNÜS TEOREMİ İLE ALAN HESAPLAMA
*		Author: Hakan Eryücel
*************************************************/
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

#define PI 3.14

int main()
{
	setlocale(LC_ALL, "turkish");
	double kenar1, kenar2, aci, alan;
	
	cout << "Alanını hesaplamak istediğiniz üçgenin iki kenarının uzunluklarını giriniz \t";
	cin >> kenar1 >> kenar2;
	cout << endl << "Girdiğiniz iki kenar arasındaki açıyı giriniz\t";
	cin >> aci;
	alan = kenar1 * kenar2 * sin(aci * PI / 180) / 2;
	cout << "Değerlerini girdiğiniz üçgenin alanı = " << alan << endl;


	system("pause");
	return 0;
}

