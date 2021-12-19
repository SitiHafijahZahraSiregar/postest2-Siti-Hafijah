#include <iostream>
#include <cmath>

using namespace std ;

int main (){
	/*
	  Nama  : Siti Hafijah Zahra Siregar
	  NPM   : 2157051005
	  Kelas : B 
	*/
	
	//float//
	float jumlah_bitcoin_dibeli, harga_pembelian, harga_saat_ini ;
	
	//input//
	cout << "BESARAN KENAIKAN SERTA PENURUNAN BITCOIN DARI WAKTU PEMBELIAN " << endl ;
	cout << "Masukkan jumlah bitcoin dibeli : " ; cin >> jumlah_bitcoin_dibeli ;
	cout << "Masukkan harga pembelian : " ; cin >> harga_pembelian ;
	cout << "Masukkan harga saat ini : " ; cin >> harga_saat_ini ;
	
	cout << endl << endl ;
	
	//output//
	cout << "HASIL KENAIKAN DAN PENURUNAN" << endl;
	cout << "kenaikan penurunan : " << (harga_saat_ini-harga_pembelian)/harga_pembelian*100 << "%" <<endl ; 
	cout << "keuntungan kerugian : " << ((jumlah_bitcoin_dibeli*harga_saat_ini)-(jumlah_bitcoin_dibeli*harga_pembelian))/1000000 << "juta" << endl ; 
	
	
	return 0;
}
