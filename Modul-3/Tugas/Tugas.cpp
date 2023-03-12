//TUGAS
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
#include<stdio.h> //header program untuk input output
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct{
	double SaldoTabungan[3];
	double SaldoDeposito;
}Rekening; //nama variabel

Rekening R; //inisial variabel
Rekening *Bank = &R; //menambahkan pointer bank

//deklarasi
char jawab;
double isi;
int menu;

main(){
	do{
		system("cls"); //menghapus layar
		//menampilkan
		cout<<"=====================================================";
		cout<<"\n                    Menu Bank                      ";
		cout<<"\n=====================================================\n";
		cout<<"1. Tambah saldo Tabungan pada rekening 1: " <<&Bank->SaldoTabungan[0] <<"\n"; //tambah saldo tabungan rek 1
		cout<<"2. Tambah saldo Tabungan pada rekening 2: " <<&Bank->SaldoTabungan[1] <<"\n"; //tambah saldo tabungan rek 2
		cout<<"3. Tambah saldo Tabungan pada rekening 3: " <<&Bank->SaldoTabungan[2] <<"\n"; //tambah saldo tabungan rek 3
		cout<<"4. Tambah saldo Deposito pada rekening " <<&Bank->SaldoDeposito <<"\n"; //tambah saldo deposito
		cout<<"5. Lihat Saldo \n"; //lihat saldo
		cout<<"=====================================================\n";
		cout<<"Pilih no Menu : "; cin>>menu; //menampilkan dan menyimpan input pilih no menu
		
		if(menu != 5){ //jika menu tidak samadengan 5
			cout<<"\n\nMasukkan Saldo : Rp. "; //menampilkan masukkan saldo
			cin>>isi; //menyimpan input isi
		}if(menu == 1){ //jika menu samadengan 1
			Bank->SaldoTabungan[0] += isi;
			cout<<"Saldo Tabungan rekening 1 telah ditambahkan "; //menampilkan saldo tabungan 1 telah ditambah
		}else if(menu == 2){  //jika menu samadengan 2
			Bank->SaldoTabungan[1] += isi;
			cout<<"Saldo Tabungan rekening 2 telah ditambahkan"; //menampilkan saldo tabungan 2 telah ditambah
		}else if(menu == 3){ //jika menu samadengan 3
			Bank->SaldoTabungan[2] += isi;
			cout<<"Saldo Tabungan rekening 3 telah ditambahkan"; //menampilkan saldo tabungan 3 telah ditambah
		}else if(menu == 4){ //jika menu samadengan 4
			Bank->SaldoDeposito += isi;
			cout<<"Saldo Deposito telah ditambahkan"; //menampilkan saldo deposito telah ditambah
		}else if(menu == 5){ //jika menu samadengan 5
			cout<<"\n\nSaldo Rekening 1 : Rp. " <<Bank->SaldoTabungan[0] <<",00\n"; //menampilkan saldo tabungan 1
			cout<<"Saldo Rekening 2 : Rp. " <<Bank->SaldoTabungan[1] <<",00\n"; //menampilkan saldo tabungan 2
			cout<<"Saldo Rekening 3 : Rp. " <<Bank->SaldoTabungan[2] <<",00\n"; //menampilkan saldo tabungan 3
			cout<<"Saldo Deposito Rp. " <<Bank->SaldoDeposito <<",00\n"; //menampilkan saldo deposito
		}
		
		cout<<"\n\n\nAnda mau mengulang menu ? <Y/N> "; //menampilkan opsi mengulang menu
		cin>>jawab; //menyimpan input jawab
	}
	
	while(jawab == 'Y' || jawab == 'y'); //perulangan
	getche(); //menghentikan program
}
