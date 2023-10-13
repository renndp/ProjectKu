#include <iostream>
#include <string>

using namespace std;

long long int nim;
string nama;
int umur;
string agama;
string ttl;
const string jurusan;

int main() {
	
    nim = 231011402196;
    nama = "Rendy Dyaz Permana";
    umur = 17;
    agama = "Islam";
    ttl = "01-05-2006";
    string jurusan = "Teknik Informatika";
    
    cout<<"=========================================="<<endl<<endl;
    
    cout << "Nama           : " << nama << endl;
    cout << "NIM            : " << nim << endl;
    cout << "Umur           : " << umur << " Tahun" << endl;
    cout << "Agama          : " << agama << endl;
    cout << "Tanggal Lahir  : " << ttl << endl;
    cout << "Jurusan        : " << jurusan << endl<<endl;
    
    cout<<"==========================================="<<endl;
    
    return 0;
}

