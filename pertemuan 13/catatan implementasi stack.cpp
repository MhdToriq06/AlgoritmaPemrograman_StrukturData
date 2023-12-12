//Implementasi Program Stack Perpustakaan
#include <iostream>
#define MAX 5
using namespace std;
struct TumpukanBuku {
	int top;
	int antrian[MAX];
}perpus;
void inisialisasi() {
	perpus.top = -1;
}
bool KondisiKosong() {
	return perpus.top == -1;
}
bool KondisiPenuh() {
	return perpus.top == MAX - 1;
}
void InputData() {
	if (KondisiPenuh()) {
		cout << " \nAntrian penuh " << endl;
	}
	else {
	perpus.top++;
		cout << " \nMasukan Antrian = "; cin >> perpus.antrian[perpus.top];
		cout << " Antrian " << perpus.antrian[perpus.top] << " Telah Masuk Ke Tumpukan Buku " << endl;
	}
}
void HapusData() {
	if (KondisiKosong()) {
		cout << " \nAntrian kosong\n " << endl;
	}
	else {
		cout << " \nAntrian " << perpus.antrian[perpus.top] << " Telah Di Hapus " << endl;
	perpus.top--; 
	}
}
void TampilData() {
	if (KondisiKosong()) {
		cout << " Antrian kosong"
	}
	else {
		cout << " \nAntrian : ";
		for (int i=perpus.top; i>=0; i++)
		cout << perpus.antrian[i] << ((i == 0) ? "" : ",");
	}
}
int main() {
	int pilihan;
	inisialisasi();
	do {
		TampilData();
		cout << " \n1. Masukan Data\n "
		<< " 2. Hapus Data\n "
		<< " 3. Keluar\n "
		<< " Masukan Pilihan : ";
		cin >> pilihan;
		switch (pilihan)
		{
			case 1 :
				InputData();
				break;
			case 2 :
				HapusData();
				break;
			default :
			cout << " Pilihan tidak tersedia " << endl;
			break;		
		}
	} while (pilihan!=3);
}
0
