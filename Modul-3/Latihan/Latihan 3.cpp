//POINTER PADA STRUCT
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
#include<stdio.h> //header program untuk input output
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct{
	double SaldoTabungan;
	double SaldoDeposito;
}Rekening; //nama variabel

Rekening R; //inisial variabel
Rekening *Bank = &R; //menambahkan pointer bank

//deklarrasi
char jawab;
double isi;
int menu;

main(){
	do{
		system("cls"); //menghapus layar
		//menampilkan
		cout<<"=================================================";
		cout<<"\n                   Menu Bank                     ";
		cout<<"\n=================================================\n";
		cout<<"1. Tambah saldo Tabungan pada rekening " <<&Bank->SaldoTabungan <<"\n"; //tambah saldo tabungan
		cout<<"2. Tambah saldo Deposito pada rekening " <<&Bank->SaldoDeposito <<"\n"; //tambah saldo deposito
		cout<<"3. Lihat Saldo \n"; //lihat saldo
		cout<<"=================================================\n";
		cout<<"Pilih no Menu : "; cin>>menu; //menampilkan dan menyimpan input pilih no menu
		
		if(menu != 3){ //jika menu tidak samadengan 3
			cout<<"\n\nMasukkan Saldo : Rp. "; //menampilkan masukkan saldo
			cin>>isi; //menyimpan input isi
		}if(menu == 1){ //jika menu samadengan 1
			Bank->SaldoTabungan += isi; 
			cout<<"Saldo Tabungan telah ditambahkan "; //menampilkan saldo tabungan telah ditambah
		}else if(menu == 2){ //jika menu samadengan 2
			Bank->SaldoDeposito += isi;
			cout<<"Saldo Deposito telah ditambahkan"; //menampilkan saldo deposito telah ditambah
		}else if(menu == 3){ //jika menu samadengan 3
			cout<<"\n\nSaldo Tabungan Rp. " <<Bank->SaldoTabungan <<",00\n"; //menampilkan saldo tabungan 
			cout<<"Saldo Deposito Rp. " <<Bank->SaldoDeposito <<",00"; //menampilkan saldo deposito
		}
		
		cout<<"\n\n\nAnda mau mengulang menu ? <Y/N> "; //menampilkan opsi mengulang menu
		cin>>jawab; //menyimpan input jawab
	}
	
	while(jawab == 'Y' || jawab == 'y'); //perulangan
	getche(); //menghentikan program
}
