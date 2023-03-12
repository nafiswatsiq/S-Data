//MAIN PROGRAM OF STACK 
#include "Stack2.cpp"

main(){
	//deklarasi
	int menu, nilai;
	char jawab;
	inisialisasi();
	
	do{
		system("cls");  //menghapus layar
		//menampilkan 
		cout<<"==========================\n";
		cout<<"       Menu Stack        ";
		cout<<"\n==========================";
		cout<<"\n1. Push Stack "; //push stack
		cout<<"\n2. Pop Stack "; //pop stack
		cout<<"\n3. Peak Stack "; //peak stack
		cout<<"\n4. Print Stack "; //print stack
		cout<<"\n==========================";
		cout<<"\nPilih Menu : "; cin>>menu; //menampilkan dan menyimpan input pilih menu
		
		if(menu == 1){ //menampilkan menu samadengan 1
			cout<<"\n\nMasukkan nilai yang di Push : "; //menampilkan masukkan nilai yg di push
			cin>>nilai; //menyimpan input nilai
			push(nilai); //memanggil nilai
		}else if(menu == 2){ //menampilkan menu samadengan 2 
			pop(); //memanggil fungsi pop
		}else if(menu == 3){ //jika menu samdengan 3
			cout<<"\n\nNilai pada tumpukan teratas adalah " <<peak(); //menampilkan dan memanggil nilai pd tumpukan teratas
			cout<<" Pada tumpukan ke " <<A.top+1; //menampilkan pada tumpukan ke
		}else if(menu == 4){ //jika menu samadengan 4
			cout<<"\n\nIsi dari Stack adalah : "; //menampilkan isi dari stack
			print(); //memanggil fungsi print
		}else{ //jika yg lainnya
			cout<<"\n\nSilahkan pilih menu 1 sampai 4 "; //menampilkan silahkan pilih menu 1-4
		}
		
		cout<<"\n\n\nAnda mau mengulang menu ? <Y/N> "; //menampilkan opsi mengulang menu
		cin>>jawab; //menyimpan input jawab
	}
	
	while(jawab == 'Y' || jawab == 'y'); //perulangan
	getche(); //menghentikan program 
}
