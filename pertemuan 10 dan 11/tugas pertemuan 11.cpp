#include <iostream>
#include <string>
using namespace std;
 
 struct Mahasiswa {
 	string nama;
 	int umur;
 	float ipk;
 };
 float HitungRataRataIPK(Mahasiswa Mahasiswa[], int jumlah) {
    float total = 0;
    for (int i=0; i< jumlah; i++){
    	total += Mahasiswa[i].ipk;
	}
    return total / jumlah;
 }
 int main (){
 	const int jumlahMahasiswa = 3; // ukuran array mahasiswa
 	Mahasiswa daftarMahasiswa[jumlahMahasiswa];
 	for ( int i = 0; i < jumlahMahasiswa; i++){
 		cout<<" masukan nama mahasiswa  "<< i + 1 <<" : ";
 		cin>>daftarMahasiswa[i].nama;
 		cout<<" masukan umur mahasiswa "<< i + 1 <<" : ";
 		cin>>daftarMahasiswa[i].umur;  
 		cout<<" masukan IPK "<< i + 1 <<" : ";
 		cin>>daftarMahasiswa[i].ipk;
	 } 	
 	cout<<"\nData Mahasiswa : \n";
 	for (int i = 0; i < jumlahMahasiswa; i++){
 		cout<<" Mahasiswa "<< i + 1 << ":\n";
 		cout<<" nama : "<<daftarMahasiswa[i].nama<<"\n";
 		cout<<" umur : "<<daftarMahasiswa[i].umur<<"\n";
 		cout<<" IPK : "<<daftarMahasiswa[i].ipk<<"\n";
	 }
	 float ratarata = HitungRataRataIPK(daftarMahasiswa, jumlahMahasiswa);
	 cout<<"\nRata-rata IPK : "<<ratarata<<"\n";
	 
	 return 0;
 		
 	
 }
