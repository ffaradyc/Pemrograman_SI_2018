#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class penghapus {
	string nama;
	string bahan;
	string warna;
	int berat;
	
	public :
		penghapus(string xnama, string xbahan,  string xwarna, int xberat);
		set_nama(string xnama) ;
		set_bahan(string xbahan);
		set_warna(string xwarna);
		set_berat(int xberat);
		
		string get_nama() {
			return nama;
		};
		
		string get_bahan() {
			return bahan;
		}
		string get_warna() {
			return warna;
		}
		
		int get_berat() {
			return berat;
		};
		
		string cek_berat(penghapus B)
		{
			if (berat > B.berat)
			{
				return nama	;
			}	else 
			{
				return B.nama;
			}
		};
		
};

penghapus::penghapus(string xnama, string xbahan,  string xwarna, int xberat)
{
	nama = xnama;
	bahan= xbahan;
	warna= xwarna;
	berat = xberat;
}

penghapus::set_nama(string xnama) 
{
	nama = xnama;
}

penghapus::set_bahan(string xbahan)
{
	bahan = xbahan;
}

penghapus::set_warna(string xwarna)
{
	warna = xwarna;
}

penghapus::set_berat(int xberat)
{
	berat = xberat;
}

int main() {
	string terberat;
	penghapus budi("Budi","Kayu", "Hitam", 30);
	penghapus wati("Wati", "Besi", "Silver", 100);
	
	//budi.set_nama("Budi");
	//budi.set_warna("Hitam");
	//budi.set_bahan("Kayu");
	
	
	
	cout << "Saya Punya Penghapus dengan nama " << budi.get_nama() ;
	cout << ", Si " << budi.get_nama() << " berbahan " << budi.get_bahan();
	cout << ", dengan Warna, " << budi.get_warna();
	cout << endl;

	
	cout << "Saya Punya Penghapus dengan nama " << wati.get_nama() ;
	cout << ", Si " << wati.get_nama() << " berbahan " << wati.get_bahan();
	cout << ", dengan Warna, " << wati.get_warna();
	cout << endl;
	
	terberat = wati.cek_berat(budi);
	cout << "Yang terberat adalah " << terberat;	
	return 0;	
}
