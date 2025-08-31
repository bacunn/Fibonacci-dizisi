#include<iostream>
using namespace std;

int fibonacci(int say)
{
	if (say == 0 || say == 1) {
		return say;
	}
	return (say - 1) + (say - 2);
}

int main() {

	int diziSay;
	char secim;
	do {
		cout << "Kac elemanli bir dizi olsun" << endl;
		cin >> diziSay;
		if (diziSay < 0) {
			cout << "Eleman sayisi nagatif deger olamaz" << endl;
		}

		for (int j = 0; j < diziSay; j++) {
			cout << fibonacci(j);
		}
		cout << "Yeniden yapmak istermisiniz(E-H)" << endl;
		cin >> secim;
		if (secim != 'E'||secim != 'e') {
			return 0;
		}
	} while (secim == 'E'||secim == 'e');
}