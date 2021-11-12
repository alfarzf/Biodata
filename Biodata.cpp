#include <iostream>
using namespace std;
/*NAMA : Tasya Azzahra Putri
NPM :2117051043
KELAS :C */

int main (){

	//string//
	string variabel_nama, variabel_jurusan, variabel_alamat, variabel_npm;
	
	cout<<"ISILAH FORMULIR BIODATA DIBAWAH INI"<<endl;
	cout<< endl;
	
	//input//
	cout <<"Masukkan nama = ";
	getline (cin,variabel_nama);
	cout <<"Masukkan jurusan = ";
	getline (cin,variabel_jurusan);
	cout <<"Masukkan alamat = ";
	getline (cin,variabel_alamat);
	cout <<"Masukkan npm = ";
	getline (cin,variabel_npm);
	cout << endl;
	
	//output//
	cout <<"nama: " << variabel_nama << endl;
	cout <<"jurusan: " << variabel_jurusan << endl;
	cout <<"alamat: " << variabel_alamat << endl;
	cout <<"npm: " << variabel_npm << endl;

	return 0;	
}
