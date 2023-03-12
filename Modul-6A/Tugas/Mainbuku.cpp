//TUGAS
#include "buku.cpp" //memanggil file buku.cpp

main(){
	initial(); //memanggil fungsi initial
	//deklarasi
	char jawab;
	int no;
	string judul;
	double harga;
	
	do{
		system("cls"); //menghapus layar
		//menampilkan
		cout <<"================================\n";
		cout <<"        Menu Data Buku        ";
		cout <<"\n================================\n";
		cout <<"1. Tambah Data Buku di Depan"; //tambah data depan
		cout <<"\n2. Tambah Data Buku di Belakang"; //tambah data belakang
		cout <<"\n3. Hapus Data Buku di Depan"; //hapus data di depan
		cout <<"\n4. Hapus Data Buku di Belakang"; //hapus data di belakang 
		cout <<"\n5. Tampil Data Buku"; //tampil data buku
		cout <<"\n================================\n";
		
		cout <<"\n\nPilih Menu : "; //menampilkan  pilih menu
		cin >>no; //menyimpan input jwaban
		
		if (no == 1 || no == 2){ //jika pilihan samdengan 1 dan 2
			cout <<"\nMasukkan data Buku : "; fflush(stdin); //menampilkan masukkan data list
			cout <<"\nJudul : "; cin >> judul, 100;
			fflush(stdin); //menampilkan judul
			cout <<"Harga : Rp. "; cin >>harga; //menampilkan dan menyimpan input harga
		} 
			if (no == 1){ //jika pilihan samadengan 1
				InsertD(judul, harga); //memanggil fungsi insertD
			} else if (no == 2){ //jika pilihan samadengan 2
				InsertB(judul, harga); //memanggil fungsi insertB			
			} else if (no == 3){ //jika pilihan samadengan 3
				HapusD(); //memanggil fungsi hapusD
			} else if (no == 4){ //jika pilihan samadengan 4
				HapusB(); //memanggil fungsi hapusB
			} else if (no == 5){ //jika pilihan samadengan 5
				cout <<"\n\nDaftar Buku di Gudang : \n"; //menampilkan daftar buku di gudang
				for (int i=0; i<37; i++){ 
					cout <<"="; //menampilkan =
				}
				printf("\n %3s %13s %14s \n", "No. ", "Judul Buku", "Harga Buku"); 
			
				for(int i=0; i<37; i++){
					cout <<"=";
				}	
				printL(); //memanggil fungsi printL
			}
			
		cout <<"\n\n\nIngin kembali ke Menu ? (Y/N) "; //meampilkan opsi kembali ke menu
		cin >>jawab; //menyimpan input pilihan
	}
	
	while(jawab == 'Y' || jawab == 'y'); //perulangan
	getche(); //menghentikan program
}
