#include <iostream>
#include <string>

using namespace std;

class Tanaman 
{
	//parent
	public:
		
	private: 
		string nama; 
		
	protected:		
		void get_nama_tanaman();
		void set_nama(string tnama);
		
};

class Buah: public Tanaman 
{
	//child 
	
	private :
		string rasa;
	public: 
		void set_rasa(string brasa);	
		void get_rasa();
		void set_nama_tanaman(string tnama);
		
};
// method tanaman 

void Tanaman::set_nama(string tnama)
{
	nama = tnama;	
}

void Tanaman::get_nama_tanaman()
{
	cout << "Nama Tanamannya adalah : " << nama << endl;
}


//method Buah

void Buah::set_rasa(string brasa)
{
	rasa = brasa;
}

void Buah::get_rasa()
{
	get_nama_tanaman();
	cout << "Rasa Buah : " << rasa << endl;
}

void Buah::set_nama_tanaman(string bnama)
{
	set_nama(bnama);
}


//main unit

int main()
{
	Buah jambu;
	jambu.set_nama_tanaman("Jambu");
	jambu.set_rasa("Asam");
	jambu.get_rasa();
	
	Buah apel;
	apel.set_nama_tanaman("Apel");
	apel.set_rasa("Manis");
	apel.get_rasa();
	return 0; 
}





