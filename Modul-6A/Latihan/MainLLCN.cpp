//MAIN LLNC.cpp
#include "LLNC.cpp" //memanggil file LLNC.cpp
#include <stdlib.h> //header program untuk oprasi pembanding dan konversi

main(){
	initial(); //memanggil fungsi initial
	//deklarasi
	char jawab;
	int no, data;
	
	do{
		system("cls"); //menghapus layar
		//menampilkan
		cout <<"============================\n";
		cout <<"      Menu Linked List       ";
		cout <<"\n============================\n";
		cout <<"1. Tambah Data di Depan "; //tambah data depan
		cout <<"\n2. Tambah Data di Belakang"; //tambah data belakang
		cout <<"\n3. Hapus Data "; //hapus data 
		cout <<"\n4. Tampil Data "; //tampil data 
		cout <<"\n============================\n";
		
		cout <<"\n\nPilih Menu : "; //menampilkan  pilih menu
		cin >>no; //menyimpan input jwaban
		
		if (no == 1 || no == 2){ //jika pilihan samdengan 1 dan 2
			cout <<"\nMasukkan data List : "; //menampilkan masukkan data list
			cin >>data; //menyimpan input data
		} 
			if (no == 1){ //jika pilihan samadengan 1
				InsertD(data); //memanggil fungsi insertD
			} else if (no == 2){ //jika pilihan samadengan 2
				InsertB(data); //memanggil fungsi insertB			
			} else if (no == 3){ //jika pilihan samadengan 3
				HapusD(); //memanggil fungsi hapusD
			} else if (no == 4){ //jika pilihan samadengan 4
				HapusB(); //memanggil fungsi hapusB
			} else if (no == 5){ //jika pilihan samadengan 5
				cout <<"\nTidak ada Data " <<endl; //menampilkan tdk ada data	
			}
			
			cout <<"\n\nIsi List terbaru : "; //menampilkan isi list terbaru
			printL(); //memanggil fungsi printL
		
		cout <<"\n\n\nIngin kembali ke Menu ? (Y/N) "; //meampilkan opsi kembali ke menu
		cin >>jawab; //menyimpan input pilihan
	}
	
	while(jawab == 'Y' || jawab == 'y'); //perulangan
	getche(); //menghentikan program
}
