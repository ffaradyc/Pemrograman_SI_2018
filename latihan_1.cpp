#include <iostream>
#include <string> 
using namespace std;

int main()
{
	string nama[10];
	cout << "Hello World" << endl;
	cout << "Apa kabar" << endl;
	for(int i=0; i<4; i++)
	{
		cout << "Orang ke " << i+1 << " Siapa Nama mu? " ;
		cin >> nama[i];
		//getline(cin, nama[i]]);
	}
	for (int i = 0; i<4; i++)
	{
		cout << endl << " Hallo, orang ke " << i+1 << " namanya adalah : " << nama[i];
	}
//	cout << endl << "Hallo, " << nama << " Apa kabar.";
	return 0;
}
