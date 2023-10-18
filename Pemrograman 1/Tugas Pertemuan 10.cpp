#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, nilai;

    // Meminta Input Nilai
    cout << "Masukkan Nilai (Minimal 3): ";
    cin >> nilai;

    // jika nilai kurang dari 3
    if (nilai < 3) {
        cout << "Nilai minimal harus 3 atau lebih." << endl;
        return 1;
    }

    // Menggunakan loop for untuk menghitung deret Fibonacci
    cout << "\nNilai Fibonacci Menggunakan For: \n";
    cout << a << ", " << b << ", ";

    for (int i = 3; i <= nilai; i++) {
        int temp = a + b;
        a = b;
        b = temp;
        cout << temp;

        // Menambahkan koma jika bukan angka terakhir
        if (i != nilai) {
            cout << ", ";
        }
    }

    cout << endl<< endl;

    // Menggunakan loop while untuk menghitung deret Fibonacci
    int i = 0;
	a = 0;
	b = 1;

    cout << "Nilai Fibonacci Menggunakan While: \n";
    while (i < nilai) {
        cout << a;

        // Menambahkan koma jika bukan angka terakhir
        if (i < nilai - 1) {
            cout << ", ";
        }

        int next = a + b;
        a = b;
        b = next;
        i++;
    }

    return 0;
}

