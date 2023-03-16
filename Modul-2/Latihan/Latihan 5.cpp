//STRUCT DALAM STRUCT
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
using namespace std;

typedef struct{
	//deklarasi 1
	char procesor[30];
	int RAM;
	char VGA[40];
}Spek; //nama variabel 1
	
typedef struct{
	//deklarasi 2
	Spek Kompie;
	char Merk[40];
	int Harga;
}Laptop; //nama variabel 2
	
Laptop Ltp; //inisial variabel

main(){
	cout<<"Masukkan Data Laptop :";//menampilkan masukkan data laptop
	fflush(stdin);//memersihkan memori
	cout<<"\nMerk \t\t: ";cin.get(Ltp.Merk,40);//menampilkan dan menyimpan merk
	fflush(stdin);//membersihkan memori
	cout<<"Harga \t\t: Rp. ";cin>>Ltp.Harga;//menampikan dan menyimpan input harga
	fflush(stdin);//membersihkan memori
	cout<<"Procesor \t: ";cin>>Ltp.Kompie.procesor;//menampilkan dan menyimpan input procesor
	fflush(stdin);//membersihkan memori
	cout<<"VGA \t\t: ";cin>>Ltp.Kompie.VGA;//menampilkan dan menyimpan input VGA
	fflush(stdin);//membersihkan memori
	cout<<"RAM \t\t: ";cin>>Ltp.Kompie.RAM;//memampilkan dan menyimpan input ram
	
	//menampilkan output
	cout<<"\n=========================";	
	cout<<"\n   Spek Laptop "<<Ltp.Merk;
	cout<<"\n   Harga : Rp. "<<Ltp.Harga;
	cout<<"\n=========================";
	cout<<"\nProcesor \t: "<<Ltp.Kompie.procesor;
	cout<<"\nRAM \t\t: "<<Ltp.Kompie.RAM;
	cout<<"\nVGA \t\t: "<<Ltp.Kompie.VGA;
	getche();//menghentikan program
}