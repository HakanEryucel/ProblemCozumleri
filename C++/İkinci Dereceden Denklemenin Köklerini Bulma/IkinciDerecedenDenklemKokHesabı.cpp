/************************************************
*	2.DERECEDEN BİR DENKLEMİN KÖKLERİNİ HESAPLAMA
*		Author: Hakan Eryücel
*************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "turkish");
	double katSayi1, katSayi2, katSayi3, diskriminant, kok1, kok2;

	cout << "Köklerini hesaplamak istediğiniz denklemdeki katsayıları sırayla giriniz\t";
	cin >> katSayi1 >> katSayi2 >> katSayi3;
	system("cls");
	diskriminant = katSayi2 * katSayi2 - 4 * katSayi1*katSayi3;
	kok1 = (-katSayi2 + sqrt(diskriminant)) / 2 * katSayi1;
	kok2 = (-katSayi2 - sqrt(diskriminant)) / 2 * katSayi1;
	if (diskriminant < 0)
		cout << "Denkleminizin kökü yoktur.";
	else if (diskriminant == 0)
		cout << "Denkleminizin bir kökü vardır. Denkleminizin kökü = " << kok1;
	else
		cout << "Denkleminizin kökleri = " << kok1 << "  " << kok2 << endl;
		

	system("pause");
    return 0;
}

