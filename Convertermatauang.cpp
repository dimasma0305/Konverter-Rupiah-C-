#include <iostream>
#include <string>
using namespace std;

void bio(){
	cout << "=====================================================" << endl;
	cout << "nama : Dimas Maulana" << endl;
	cout << "no   : 04" << endl;
	cout << "kls  : XII TKJ 2" << endl;
	cout << "=====================================================" << endl;
}

int main(){
	int amount;
	float result;
	int currency;
	string currency_name;
	cout << "Kamu bisa konfersi mata uang rupiah ke dolar atau yen" << endl;
	cout << "=====================================================" << endl;
	cout << "99. [bio data]" << endl;
	cout << "1. Rupiah ke Dolar" << endl;
	cout << "2. Rupiah ke Yen" << endl;
	cout << "=====================================================" << endl;
	cout << "Masukkan opsi: ";
	cin >> currency;
	if (currency == 99)
	{
		bio();
	}
	else
	{
		cout << "Masukkan jumlah rupiah: ";
		cin >> amount;
		float float_amount = (float)amount;
		switch (currency)
		{
		case 1:
			currency_name = "dolar";
			result = float_amount * 0.000070;
			break;
		case 2:
			currency_name = "yen";
			result = float_amount * 0.0080;
			break;
		}
		cout << amount << " rupiah adalah " << result << " " << currency_name << endl;
}
	}