#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i = 1;

    // Loop untuk baris (berjalan 5 kali)
    do {
        int j = 5;

        // Loop untuk kolom (berjalan dari 5 sampai i)
        do {
            int lebar = 5 * 1;
            cout << setw(lebar) << i;
            j--;
        } while (j >= i);

        cout << "\n\n"; // Pindah ke baris berikutnya setelah satu baris selesai
        i++;
    } while (i <= 5); // Ulangi hingga mencapai 5 baris

    return 0;
}

