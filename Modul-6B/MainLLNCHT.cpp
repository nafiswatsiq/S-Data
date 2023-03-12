//MAIN PROGRAM OF LINK LIST NON CIRCULAR
#include "LLNCHT.cpp" //memanggil file LLNCHT.cpp

main(){
	initial(); //memanggil fungsi initial
	//deklarasi variabel
	char jawab;
	int no, data;
	
	do{
		system("cls"); //membersihkan layar

		cout <<"=====================================\n";
		cout <<"  Menu Linked List dengan HEAD TAIL  ";
		cout <<"\n=====================================\n";
		cout <<"1. Tambah Data di Depan";
		cout <<"\n2. Tambah Data di Belakang";
		cout <<"\n3. Hapus Data di Depan";
		cout <<"\n4. Hapus Data di Belakang";
		cout <<"\n5. Tampil Data"; 
		cout <<"\n=====================================\n";
		
		cout <<"\nPilih Menu : "; //input pilih menu
		cin >>no; //menyimpan input jawaban
		
		if (no == 1 || no == 2){ //jika pilihan 1 atau 2
			cout <<"\nMasukkan data List : "; //menampilkan masukkan data list
			cin >>data; //menyimpan input data 
		} 
			if (no == 1){ //jika pilihan 1
				InsertD(data); //memanggil fungsi insert depan
			} else if (no == 2){ //jika pilihan 2
				InsertB(data); //memanggil fungsi insert belakang		
			} else if (no == 3){ //jika pilihan 3
				HapusD(); //memanggil fungsi hapus depan
			} else if (no == 4){ //jika pilihan 4
				HapusB(); //memanggil fungsi hapus belakang
			} else if (no == 5){ //jika pilihan 5
				printL(); //panggil fungsi tampilkan data
			}
			
			cout <<"\n\nIsi List terbaru : \n"; //menampilkan isi list terbaru
			printL(); //memanggil fungsi tamppilkan data
					
		cout <<"\n\n\nIngin kembali ke Menu ? (Y/N) "; //meampilkan opsi kembali ke menu
		cin >>jawab; //menyimpan input pilihan
	}while(jawab == 'Y' || jawab == 'y'); //jika pilih y maka mengulang program

	getche(); //menghentikan program
}
