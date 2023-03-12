//MAIN PROGRAM OF STACK 
#include "stack.cpp" //memanggil file stack.cpp

main(){
	//deklarasi varabel
	int menu, nilai;
	char jawab;
	inisialisasi();
	
	do{
		system("cls"); //menghapus layar
		//menampilkan menu
		cout<<"==========================\n";
		cout<<"       Menu Stack        ";
		cout<<"\n==========================";
		cout<<"\n1. Push Stack "; 
		cout<<"\n2. Pop Stack ";
		cout<<"\n3. Peak Stack ";
		cout<<"\n4. Swap Element Stack ";
		cout<<"\n5. Print Stack ";
		cout<<"\n==========================";
		cout<<"\nPilih Menu : "; cin>>menu; //input menu
		
		if(menu == 1){ //jika memilih menu 1
			cout<<"\n\nMasukkan nilai yang di Push : "; //input nilai yg di push
			cin>>nilai; //menyimpan input nilai
			push(nilai); //memanggil fungsi push
		}else if(menu == 2){ //jika memilih menu 2
			pop(); //memanggil fungsi pop
		}else if(menu == 3){ //jika memilih menu 3
			cout<<"\n\nNilai pada tumpukan teratas adalah ";
			peak(); //memanggil fungsi peak
			cout<<" Pada tumpukan ke " << A.top+1; //menampilkan tumpukan
		}else if(menu == 4){ //jika memilih menu 4
			cout<<"\n\nNilai yang Mau Ditukar dengan Top : "; //input nilai yg mau ditukar
			cin>>nilai; //menyimpan input nilai
			swap(nilai); //memanggil fungsi swap
		}else if(menu == 5){ //jika memilih menu 5
			cout<<"\n\nIsi dari Stack adalah : \n"; //menampilkan isi dari stack
			print(); //memanggil fungsi print
		}else{ //jika salah menu
			cout<<"\n\nSilahkan pilih menu 1 sampai 4 "; //menampilkan silahkan pilih menu 1-4
		}
		
		cout<<"\n\n\nAnda mau mengulang Menu ? <Y/N> "; //menampilkan opsi mengulang menu
		cin>>jawab; //menyimpan input jawab
	}while(jawab == 'Y' || jawab == 'y'); //perulangan
	
	getche(); //menghentikan program
}
