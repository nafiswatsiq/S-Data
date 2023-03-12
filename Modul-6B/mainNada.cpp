#include "Nada.cpp" //memanggil file Nada.cpp

main(){
	initial(); //memanggil fungsi initial
	//deklarasi data nada
    nada[0] = 32;
    nada[1] = 32 * pow(1.0595, 2);
    nada[2] = 32 * pow(1.0595, 4);
    nada[3] = 32 * pow(1.0595, 5);
    nada[4] = 32 * pow(1.0595, 7);
    nada[5] = 32 * pow(1.0595, 9);
    nada[6] = 32 * pow(1.0595, 11);

	//deklarasi
	char jawab;
	int no, data;
	
	do{
		system("cls"); //membersihkan layar

		cout <<"=====================================\n";
		cout <<"         Menu Penyusun Nada        ";
		cout <<"\n=====================================\n";
		cout <<"1. Tambah Nada di Depan";
		cout <<"\n2. Tambah Nada di Belakang";
		cout <<"\n3. Hapus Nada di Depan";
		cout <<"\n4. Hapus Nada di Belakang";
		cout <<"\n5. Mainkan Nada";
		cout <<"\n=====================================\n";
		
		cout <<"Pilih Menu : "; //tampilkan pilihan menu
		cin >>no; //menyimpan input menu
		
		if (no == 1 || no == 2){ //jika pilihan 1 atau 2
			cout <<"\nMasukkan Nada ( 1 - 7 ) "; //menampilkan masukkan nada
			cin >>data; //menyimpan input data 
			if (data < 1 || data > 7){ //jika input data kurang dari 1 atau lebih dari 7
				cout <<"\nNada hanya 1 sampai dengan 7"; //tampilkan peringatan
                no = 6;
		    } 
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
                Play(); //memanggil fungsi Play
            }
           
			cout <<"\n\nIsi urutan Nada : \n"; //menampilkan urutan nada
			printL(); //memanggil fungsi tampilkan nada
					
		cout <<"\n\n\nIngin kembali ke Menu ? (Y/N) "; //meampilkan opsi kembali ke menu
		cin >>jawab; //menyimpan input pilihan
	}while(jawab == 'Y' || jawab == 'y'); //jika jawab y maka mengulang program

	getche(); //menghentikan program
}
