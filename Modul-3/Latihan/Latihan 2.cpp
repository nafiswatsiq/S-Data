//POINTER PADA ARRAY
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
#include<stdio.h> //header program untuk input output
using namespace std; //untuk menggunakan cin cout

main(){
	//deklarasi
	int X[5]={6,8,10,13,15};
	int *pointer;
	pointer = X;
	
	//menampilkan
	cout<<"\n Isi dari pointer adalah " <<pointer; //isi dari pointer
	cout<<"\n Pointer mengarah pada nilai " <<*pointer; //pointer mengarah pada nilai
	pointer++; //pointer + 1
	cout<<"\n Isi dari pointer adalah " <<pointer; //isi dari pointer
	cout<<"\n Pointer mengarah pada nilai " <<*pointer; //pointer mengarah pada nilai
	
	getche(); //menghentikan program
}
