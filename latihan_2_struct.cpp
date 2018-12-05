#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define TOTAL_MOBIL 3

struct mobil_t {
	string nama;
	int pintu ;
	string warna;
} mobil [TOTAL_MOBIL];

mobil_t mobil_2018 [2];

mobil_t data_mob(string judul, int x)
{
	mobil_t data_mobil;
	string pt;
	cout << judul << endl;
	cout << "masukan Nama Mobil ke " << " : " ;
	getline(cin, data_mobil.nama);
	cout << "Masukan Warna Mobil ke " <<" : ";
	getline(cin, data_mobil.warna);
	cout << "Masukan Jumlah Pintu ke " << " : ";
	getline(cin, pt);
	stringstream(pt) >> data_mobil.pintu;
	cout << endl;
	return data_mobil;	
}

int main()
{
	int n;
	
	cout << "Masukan Tipe tipe Mobil : " << endl;
	
	for(int x=0; x < TOTAL_MOBIL; x++)
	{
		mobil[x] = data_mob("mobil", x);	
	}
	
	for(int x=0; x < TOTAL_MOBIL; x++)
	{
		mobil_2018[x] = data_mob("Mobil 2018", x);	
	}
	
	do {
		cout << "Pilih nomor mobil (0-2) :";
		cin >> n;
		cout << "nama Mobil : " << mobil[n].nama << endl;
		cout << "Jumlah Pint : " << mobil[n].pintu << endl;
		cout << "Warna Mobil : " << mobil[n].warna << endl;
	} while (n >= 0);	
	
	return 0;
}
