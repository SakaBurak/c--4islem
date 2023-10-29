#include<iostream>
using namespace std;

int toplama(int sayi1, int sayi2) {
	return sayi1 + sayi2;
}

int cikarma(int sayi1, int sayi2) {
	return sayi1 - sayi2;
}

int carpma(int sayi1, int sayi2) {
	return sayi1 * sayi2;
}

int bolme(int sayi1, int sayi2) {
	return sayi1 / sayi2;
}


int mod(int sayi1, int sayi2) {
	return sayi1 % sayi2;
}

int islem(int(*islem)(int, int), int sayi1, int sayi2) {
	return (*islem)(sayi1, sayi2);
}

int main() {
	
	int sayi1, sayi2;
	cout << "1.Sayiyi giriniz:";
	cin >> sayi1;
	cout << "2.Sayiyi giriniz:";
	cin >> sayi2;
	cout << "Toplama:" << islem(&toplama, sayi1, sayi2) << endl;
	cout << "Cikarma:" << islem(&cikarma, sayi1, sayi2) << endl;
	cout << "Carpma:" << islem(&carpma, sayi1, sayi2) << endl;
	cout << "Bolme:" << islem(&bolme, sayi1, sayi2) << endl;
	cout << "Mod :" << islem(&mod, sayi1, sayi2) << endl;

	return 0;
}
