#include <iostream>
#include <cmath>

using namespace std;

int main (){ 

	int A = 3;
	int B = 4;
	int C = -5;
	int X = 16;
	double i = 3.2;
	double j = 2.6;
	
	//absolut
	int absolut = fabs(C);
	cout<<"Nilai Absolut Dari -5 = "<<absolut<<endl;
	cout<<"================================================="<<endl;
	
	//pembulatan ke atas
	int atas = ceil(i);
	int atas1 = ceil(j);
	cout<<"Nilai Pembulatan ke Atas 3.2 =  " <<atas<<endl;
	cout<<"Nilai Pembulatan ke Atas 2.6 =  " <<atas1<<endl;
	cout<<"=================================================="<<endl;
	
	//pembulatan ke bawah
	int bawah = floor(i);
	int bawah1= floor(j);
	cout<<"Nilai Pembulatan ke Bawah 3.2 =  "<<bawah<<endl;
	cout<<"Nilai Pembulatan ke Bawah 2.6 =  "<<bawah1<<endl;
	cout<<"==================================================="<<endl;
	
	//pembulatan
	int bulat = round(i);
	int bulat1 = round(j);
	cout<<"Nilai Pembulatan 3.2 =  "<<bulat<<endl;
	cout<<"Nilai Pembulatan 2.6 =  "<<bulat1<<endl;
	cout<<"==================================================="<<endl;
	
	//bagian bilangan bulat
	int bagian = trunc(i);
	int bagian1 = trunc(j);
	cout<<"Nilai Bilangan Bulat 3.2 =  "<<bagian<<endl;
	cout<<"Nilai Bilangan Bulat 2.6 =  "<<bagian1<<endl;
	cout<<"==================================================="<<endl;
	
	//akar kuadrat
	int akar = sqrt(X);
	cout<<"Akar Kuadrat Dari 16 =  "<<akar<<endl;
	cout<<"===================================================="<<endl;
	
	//pangkat
	int pangkat = pow(A,B);
	cout<<"Hasil 3 Pangkat 4 = "<<pangkat<<endl;
	cout<<"===================================================="<<endl;
	
	//sisi miring
	int siku = hypot(A ,B);
	cout<<"Sisi Miring Dari 3 dan 4 =  "<<siku<<endl;
	cout<<"===================================================="<<endl;
	
	return 0;
}
	
	
	

