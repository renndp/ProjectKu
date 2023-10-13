#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C;

    // Menampilkan judul program
    cout << "==================================" << endl;
    cout << "||    Jenis Segitiga        ||" << endl;
    cout << "==================================" << endl << endl;

    // Menginput panjang sisi-sisi segitiga
    cout << "Masukkan Panjang Sisi Pertama: ";
    cin >> A;
    cout << "Masukkan Panjang Sisi Kedua  : ";
    cin >> B;
    cout << "Masukkan Panjang Sisi Ketiga : ";
    cin >> C;
    cout << endl;

    // Mengurutkan nilai-nilai sisi segitiga (urutkan dari terkecil ke terbesar)
    if (A > B) {
        swap(A, B);
    }
    if (A > C) {
        swap(A, C);
    }
    if (B > C) {
        swap(B, C);
    }

    // Variabel boolean untuk menentukan jenis segitiga
    bool samasisi = (A == B && B == C);
    bool samakaki = (A == B || B == C || A == C);
    bool sikusiku = (pow(A, 2) + pow(B, 2) == pow(C, 2));

    // Menampilkan jenis segitiga
    if (samasisi) {
        cout << "Segitiga Sama Sisi" << endl;
    } else if (samakaki) {
        cout << "Segitiga Sama Kaki" << endl;
    } else if (sikusiku) {
        cout << "Segitiga Siku-Siku" << endl;
    } else {
        cout << "Segitiga Sembarang" << endl;
    }

    return 0;
}
