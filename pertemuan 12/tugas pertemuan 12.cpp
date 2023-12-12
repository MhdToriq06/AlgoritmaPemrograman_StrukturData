#include<iostream>
using namespace std;

struct mhs {
    char nama[20], nim[10], matkul[15];
    int sks;
};

mhs bayar[4];

int main() {
    int tetap, var;

    for (int i = 0; i < 2; i++) {
    	// input
    	cout <<"-------------------------\n";
        cout <<"| INPUT DATA MAHASISWA | ";
        cout <<"\n-------------------------";
        cout<<"\nNama Mahasiswa  : ";
        cin >> bayar[i].nama;
        cout << "NIM             : ";
        cin >> bayar[i].nim;
        cout << "Mata Kuliah     : ";
        cin >> bayar[i].matkul;
        cout << "Jumlah SKS      : ";
        cin >> bayar[i].sks;
    }



	for (int i = 0; i < 2; i++) {
        // output
        cout <<"--------------------------\n";
        cout <<"| OUTPUT DATA MAHASISWA |";
        cout <<"\n-------------------------";
        cout <<"\nNama Mahasiswa   : ";
        cout << bayar[i].nama << endl;
        cout << "NIM               : ";
        cout << bayar[i].nim << endl;
        cout << "Mata Kuliah       : ";
        cout << bayar[i].matkul << endl;
        cout << "Jumlah SKS        : ";
        cout << bayar[i].sks << endl;
        
        if (bayar[i].sks == 0) {
            tetap = 250000;
            var = bayar[i].sks * 250000;
        } else if (bayar[i].sks == 2) {
            tetap = 300000;
            var = bayar[i].sks * 300000;
        }
        cout << "SPP Tetap = " << tetap << endl;
    	cout << "SPP Var   = " << var << endl;
	}

    return 0;
}


