#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int nasi_goreng(int &telur, int &nasi, int porsi)
{
	if ((telur >= 2*porsi) && (nasi >= 3*porsi))
	{
		telur = telur - 2*porsi;
		nasi = nasi - 3*porsi;
		return 1;
			
	} 
	return 0;		
}

int bubur(int &nasi, int porsi)
{
	if (nasi >= 2*porsi)
	{
		nasi = nasi - 2*porsi;
		return 1;
			
	} 
	return 0;
}

int kue (int &telur, int porsi)
{
	if (telur >= 3*porsi)
	{
		telur = telur - 3*porsi;
		return 1;
			
	} 
	return 0;
}

int main()
{
	int telur, nasi, masakan, porsi;
	
	cout << "Berapa Jumlah Telur yang anda miliki : ";
	cin >> telur;
	cout << endl;
	 
	cout << "Berapa Jumlah Nasi yang anda miliki : ";
	cin >> nasi;
	cout << endl;
	
		
	do 	{
		
		cout << endl << "Anda mau masak apa (1. Nasi Goreng, 2. Bubur, 3. Kue, 0. untuk selesai)? ";
		cin >> masakan;
		cout << endl;

		cout << "Berapa Porsi ?";
		cin >> porsi;
		
		switch ( masakan){
			case 1:
				if (nasi_goreng(telur, nasi, porsi))
					cout << "Nasi Goreng Tersedia" << endl ;
				else
					cout << "Nasi Goreng Kurang Bahan" << endl ;
				break;
			case 2:
				if (bubur(nasi, porsi))
					cout << "Bubur Tersedia" << endl ;
				else
					cout << "Bubur Kurang Bahan" << endl ;
				break;
			case 3:
				if (kue(telur,  porsi))
					cout << "Kue Goreng Tersedia" << endl ;
				else
					cout << "Kue Goreng Kurang Bahan" << endl ;
				break;
			default : 
				cout << "Jenis Masakan Tidak tersedia" << endl ;
			
		}
		
		cout << "Sisa Telur Sebanyak : " << telur << endl;
		cout << "Sisa Nasi Sebanyak : " << nasi << endl;
				
	} while ( masakan != 0);
	
	cout << "Selamat Makan" << endl;
	
	return 1;
}




