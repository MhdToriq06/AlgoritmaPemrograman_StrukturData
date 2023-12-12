#include <iostream>
using namespace std;

int main() {
    int a1, c1, o1, a2, c2, d[20], d1[20], d2 = 0, d3;
    const string cek[3][3] = {"D", "Dada", "Rp2.500", "P", "Paha", "Rp2.000", "S", "Sayap", "Rp1.500"};
    char h[20];

    cout << "\t\tSABANA FIRED CHICHEN" << endl;
    cout << "=====================================================" << endl;
    cout << "\tKode\t\tJenis\t\t Harga" << endl;
    cout << "=====================================================" << endl;

    for (a1 = 0; a1 < 3; a1++) {
        for (c1 = 0; c1 < 3; c1++) {
            cout << "\t" << cek[a1][c1] << "\t";
        }
        cout << endl;
    }

    cout << "=====================================================" << endl;

    cout << endl << "Banyak jenis :  ";
    cin >> o1;

    for (a1 = 0; a1 < o1; a1++) {
        cout << "Jenis Potong [D/P/S] :  ";
        cin >> h[a1];
        cout << "Banyak Potong :  ";
        cin >> d[a1];
    }

    string j[5] = {"No.", "Jenis Potong", " Harga Satuan", "  Banyak Potong", "     Jumlah Harga"};

    cout << "\t\tSabana Fired Chichen" << "\n--------------------------------------------------------------------------------\n";
    for (int q = 0; q < 5; q++) {
        cout << j[q] << "\t";
    }
    cout << endl << "--------------------------------------------------------------------------------\n";

    for (int a2 = 0; a2 < o1; a2++) {
        cout << a2 + 1 << "\t\t" << h[a2] << "\t   ";
        if (h[a2] == 'd' || h[a2] == 'D') {
            cout << "Rp " << 2500;
        } else {
            if (h[a2] == 'p' || h[a2] == 'P') {
                cout << "Rp " << 2000;
            } else {
                if (h[a2] == 's' || h[a2] == 'S') {
                    cout << "Rp " << 1500;
                }
            }
        }
        cout << "\t\t" << d[a2] << "   \t        ";
        if (h[a2] == 'd' || h[a2] == 'D') {
            d1[a2] = 2500 * d[a2];
            cout << "Rp " << 2500 * d[a2];
        } else {
            if (h[a2] == 'p' || h[a2] == 'P') {
                d1[a2] = 2000 * d[a2];
                cout << "Rp " << 2000 * d[a2];
            } else {
                if (h[a2] == 's' || h[a2] == 'S') {
                    d1[a2] = 1500 * d[a2];
                    cout << "Rp " << 1500 * d[a2];
                }
            }
        }
        d2 = d2 + d1[a2];
        cout << endl;
    }

    d3 = d2 * 10 / 100;

    cout << "--------------------------------------------------------------------------------\n";

    cout << "\t\t\t\t\t  Jumlah Bayar :\tRp " << d2 << endl;
    cout << "\t\t\t\t\t     Pajak 10% :\tRp " << d3 << endl;
    cout << "\t\t\t\t\t   Total Bayar :\tRp " << d3 + d2 << endl;

    cout << "--------------------------------------------------------------------------------\n";

    return 0;
}
