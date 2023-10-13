#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, x, y;
    a = 20.0;
    b = 40.0;
    c = 15.0;
    x = 1000.0;
    y = 10.0;

    cout << "=============================" << endl;
    
    // 1. Menghitung A² + B² + C³
    double satu = pow(a, 2) + pow(b, 2) + pow(c, 3);
    cout << "Hasil no 1: " << satu << endl << endl;
    
    cout << "=============================" << endl;
    
    // 2. Menghitung A/2 + C²
    double dua = a / 2 + pow(c, 2);
    cout << "Hasil no 2: " << dua << endl << endl;
    
    cout << "=============================" << endl;
    
    // 3. Menghitung Akar Dari X/Y + X²
    double tiga = sqrt(x / y + pow(x, 2));
    cout << "Hasil no 3: " << tiga << endl << endl;
    
    cout << "=============================" << endl;

    return 0;
}

