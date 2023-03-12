//STRUCT
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
using namespace std;

struct{
	//deklarasi
	int NIM;
	char Nama;
	char kelas;
}Mhs; //nama variabel

main(){
	cout<<"Masukkan NIM : "; //menampilkan masukkan nim
	cin>>Mhs.NIM; //menyimpan input nim 
	fflush(stdin); //membersihkan memori
	cout<<"Masukkan Nama : "; //menampilkan masukkan nama
	cin>>Mhs.Nama; //menyimpan input nama
	fflush(stdin); //membersihkan memori
	cout<<"Masukkan Kelas : "; //menampilkan masukkan kelas 
	cin>>Mhs.kelas; //menyimpan input kelas
	//menampilkan output
	cout<<"Mahasiswa dengan NIM "<<Mhs.NIM<<" bernama "<<Mhs.Nama<<" Kelas "<<Mhs.kelas;
	getche(); //menghentikan program
}
