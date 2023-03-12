//POINTER
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
#include<stdio.h>
using namespace std; //untuk menggunakan cin cout

main(){
	//deklarasi
	int Y=5;
	int *X = &Y;
	
	//menampilkan
	cout<<"\n Isi dari variabel Y adalah " <<Y; //isi variabel y
	cout<<"\n Alamat memory variabel Y adalah " <<&Y; //alamat memory variabel y
	cout<<"\n Isi dari variabel X adalah " <<X; //isi variabel x
	cout<<"\n Alamat memory variabel X adalah " <<&X; //alamat memory variabel x
	cout<<"\n Nilai yang disimpan di Alamat " <<X <<" adalah " <<*X; //nilai yang disimpan di alamat
	
	getche(); //menghentikan program
}
