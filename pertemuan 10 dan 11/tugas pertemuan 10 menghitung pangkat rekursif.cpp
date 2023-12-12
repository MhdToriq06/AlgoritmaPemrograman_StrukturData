#include <iostream>
using namespace std;

int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main() {
    int nilai_a, nilai_b;
    cout << "-- MENGHITUNG PANGKAT DENGAN NILAI REKURSIF --" << endl;
    cout << "================================================" <<endl;
    cout << "Masukkan nilai a : ";
    cin >> nilai_a;
    cout << "Masukkan nilai b : ";
    cin >> nilai_b;

    int hasil_pangkat = pangkat(nilai_a, nilai_b);
    cout << "Hasil dari " << nilai_a << " pangkat " << nilai_b << " adalah = " << hasil_pangkat << endl;

    return 0;
}

