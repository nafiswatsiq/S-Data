//TYPEDEF
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
using namespace std;

//tipe data bentukan
typedef int angka;
typedef float desimal;
typedef char huruf;
typedef char String[100];

main(){
	//deklarasi
	angka umur;
	desimal nilai;
	huruf kelas;
	String nama;
	
	cout<<"Nama Anda \t: "; //menampilkan nama anda
	cin.get(nama,100); fflush(stdin); //menyimpan input nama
	cout<<"Umur Anda \t: "; //menampilkan umur anda
	cin>>umur; //menyimpan input nama
	cout<<"Kelas Anda \t: "; //menampilkan kelas anda
	cin>>kelas; //menyimpan input kelas
	cout<<"IP Anda \t: "; //menampilkan ip anda
	cin>>nilai; //menyimpan input nilai
	//menampilkan output
	cout<<"\n\n"<<nama<<" dari kelas "<<kelas<<" berumur "<<umur<<" dengan IP "<<nilai; 
	getche(); //menghentikan program
}

