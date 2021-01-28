#pragma warning(disable:4996)

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

/* Created by Rizky Khapidsyah */

class motor {
private:
	char* merk;
	float cc_mesin; long harga;

public:
	motor(const char* nama, float cc, long hrg);//konstruktor
	~motor();//destruktor
	void keterangan();
};

int main() {
	system("cls");

	motor sport("Honda CBR", 500, 30500000);
	motor matic("Honda Vario", 125, 14500000);
	
	sport.keterangan();
	matic.keterangan();
	
	_getch();
	return 0;
}

motor::motor(const char* nama, float cc, long hrg) {
	merk = new char[25];//merubah data karakter menjadi string
	strcpy(merk, nama);
	cc_mesin = cc;
	harga = hrg;
}

motor :: ~motor() {
	delete[] merk;//menghapus memori karakter pd merk
}

void motor::keterangan() {
	cout << "\n Informasi Motor:" << endl
		<< " Merk = " << merk << endl
		<< " CC Mesin = " << cc_mesin << endl
		<< " Harga = " << harga << endl << endl;
}