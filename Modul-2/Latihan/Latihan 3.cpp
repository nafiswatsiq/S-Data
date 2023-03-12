//TYPEDEF STRUCT 
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
using namespace std;

typedef struct{
	//deklarasi
	char procesor[30];
	int RAM;
	char VGA[40];	
}PC; //nama variabel

//inisial variabel
PC Acer,Toshiba,Lenovo;

main(){
	cout<<"Masukkan spek Acer : "; //menampilkan masukkan spek acer
	fflush(stdin); //membersikan memori
	cout<<"\nProcesor \t: "; //menampilkan procesor
	cin.get(Acer.procesor,30);fflush(stdin); //menyimpan input procesor
	cout<<"RAM \t\t: "; // menampilkan ram
	cin>>Acer.RAM;fflush(stdin); //menyimpan input ram
	cout<<"VGA \t\t: "; //manampilkan vga
	cin>>Acer.VGA;fflush(stdin); //menyimpan input vga
	
	//menampilkan output
	cout<<"\n=====================";
	cout<<"\n      Spek Acer      ";
	cout<<"\n=====================";
	cout<<"\nProcesor \t: "<<Acer.procesor;
	cout<<"\nRAM \t\t: "<<Acer.RAM;
	cout<<"\nVGA \t\t: "<<Acer.VGA;
	getche(); //menghentikan program
}
