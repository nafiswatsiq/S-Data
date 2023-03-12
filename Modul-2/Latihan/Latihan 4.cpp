//ARRAY OF STRUCT
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
using namespace std;

typedef struct{
	//deklarasi
	char procesor[30];
	int RAM;
	char VGA[40];
}PC; //nama variabel

PC kom[10]; //inisial variabel

main(){
	cout<<"Masukkan spek Komputer : "; //menampilkan masukkan spek komputer
	fflush(stdin); //membersihkan memori
	cout<<"\nProcesor \t: "; //menampilkan procesor
	cin.get(kom[0].procesor,30); //menyimpan input procesor
	fflush(stdin); //membersihkan memori
	cout<<"RAM \t\t: "; //menampilkan ram
	cin>>kom[0].RAM; //menyimpan input ram
	fflush(stdin); //membersihkan memori
	cout<<"VGA \t\t: "; //menampilkan vga
	cin>>kom[0].VGA; //meenyimpan input vga
	fflush(stdin); //membersihkan memori
	
	//menampilkan output
	cout<<"\n=====================";	
	cout<<"\n    Spek Komputer    ";
	cout<<"\n=====================";
	cout<<"\nProcesor \t: "<<kom[0].procesor;
	cout<<"\nRAM \t\t: "<<kom[0].RAM;
	cout<<"\nVGA \t\t: "<<kom[0].VGA;
	getche(); //menghentikan program
}
