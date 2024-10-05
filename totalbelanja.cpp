#include <iostream>
#include <string>


using namespace std;

int main() {
	
	

	string nama;
	double totalBelanja;
	double diskon= 0.0 ;
	double totalBayar;
	double totalDiskon;
	bool statusAnggota;
	
	cout << "--------------MENENTUKAN TOTAL PEMBAYARAN BELANJA--------------" << endl << endl;
	
	cout << "Nama Pelanggan : ";
	getline(cin, nama );

	
	cout << "Total Belanja  : " ;
	cin >> totalBelanja ;
	cin.ignore ();
	
	cout << "Apakah Pelanggan Seorang Anggota? (1 untuk TRUE, 0 untuk FALSE) : " ;
	cin >> statusAnggota;
	
	if (statusAnggota) {
		if (totalBelanja >= 500000) {
			diskon= 0.20;
		}else if (totalBelanja >= 250000) {
			diskon= 0.10;
		}else {
			diskon= 0.0;
		}
		
	} else {
		if (totalBelanja >= 500000){
			diskon= 0.05;
		} else {
			diskon= 0.0;
		}
	}
	
	cout << "Selamat Anda Mendapatkan Diskon Sebesar " << diskon * 100 << "%" << endl;

	totalDiskon = totalBelanja * diskon ;
	cout << "Potongan Harga yang Didapatkan Sejumlah " << totalDiskon << endl;
	
	totalBayar = totalBelanja - totalDiskon ;
	cout << "Maka Total Yang Harus Dibayarkan Adalah " << totalBayar << endl;

	if (statusAnggota) {
		if (diskon > 0.10) {
			cout<< "Terima kasih sudah berbelanja" << endl;
		} else {
			cout << "Terima Kasih Sudah Berbelanja, ayo lebih banyak lagi belanja untuk mendapatkan diskon lebih besar" << endl;
		}

	} else {
		if (diskon > 0) {
			cout << "Terima kasih sudah berbelanja, ayo mendaftar sebagai member untuk mendapatkan diskon lebih besar" << endl;
		} else {
			cout << "Terima kasih sudah berbelanja, ayo mendaftar sebagai member untuk mendapatkan diskon menarik" << endl;
		}
	}


	return 0;
	
}
