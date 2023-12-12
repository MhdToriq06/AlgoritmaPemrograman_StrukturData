#include <iostream>
#include <stack>
using namespace std;


int main() {
    // Membuat stack dengan tipe data bilangan bulat
    stack<int> bilanganStack;

    // Menambahkan bilangan-bilangan ke dalam stack
    bilanganStack.push(8);
    bilanganStack.push(6);
    bilanganStack.push(4);
    bilanganStack.push(2);

    // Menampilkan elemen-elemen dalam stack
    cout << "________________________________\n";
    cout << "\nIsi stack adalah : ";
    while (!bilanganStack.empty()) {
        std::cout << bilanganStack.top() << " ";
        bilanganStack.pop(); // Menghapus elemen teratas
    }

    std::cout << "\n";

    return 0;
}
