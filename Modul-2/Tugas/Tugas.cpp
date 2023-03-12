//TUGAS
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
using namespace std;

typedef struct{
	//deklarasi 1
	char Nama[40];
	char Bupati[40];
}Kota; //nama variabel 1
	
typedef struct{
	//deklarasi 2
	Kota Kt[70];
	char Nama[40];
	char Gubernur[40];
}Provinsi; //nama variabel 2

typedef struct{
	//deklarasi 3
	Provinsi Prov[70];
	char Nama[40];
	char Presiden[40];
}Negara; //nama variabel 3

Negara Neg; //inisial variabel
int jmlprov, jmlkot, i=1, j=1;

main(){
	cout<<"Nama Negara : ";cin.get(Neg.Nama,40); //menampilkan dan menyimpan 
	fflush(stdin); //memersihkan memori
	cout<<"Nama Presiden : ";cin.get(Neg.Presiden,40);
	fflush(stdin); //memersihkan memori
	cout<<"Jumlah Provinsi : "; cin>>jmlprov;
	fflush(stdin); //memersihkan memori
	
	for(i=1; i<=jmlprov; i++){
		cout<<"\t--------------------------------------\n";
		fflush(stdin);
		cout<<"\tNama Provinsi ke- "<<i<<" : ";cin.get(Neg.Prov[i].Nama,40);
		fflush(stdin);
		cout<<"\tNama Gubernur "<<Neg.Prov[i].Nama<<" : ";cin.get(Neg.Prov[i].Gubernur,40);
		fflush(stdin);
		cout<<"\tJumlah Kota : "; cin>>jmlkot;		
		
		for(j=1; j<=jmlkot; j++){
			cout<<"\t--------------------------------------\n";
			fflush(stdin);
			cout<<"\t\tNama Kota ke- "<<i<<" : ";cin.get(Neg.Prov[i].Kt[j].Nama,40);
			fflush(stdin);
			cout<<"\t\tNama Bupati "<<Neg.Prov[i].Kt[j].Nama<<" : ";cin.get(Neg.Prov[i].Kt[j].Bupati,40);
			fflush(stdin);			
		};
	};
	
	system("cls");
	cout<<"Negara "<<Neg.Nama<<endl;
	cout<<"Presiden "<<Neg.Presiden<<endl;
	
	for(i=1; i<=jmlprov; i++){
		cout<<"\t--------------------------------------\n";		
		cout<<"\tProvinsi "<<Neg.Prov[i].Nama<<endl;
		cout<<"\tProvinsi "<<Neg.Prov[i].Gubernur<<endl;
		
		for(i=1; j<=jmlkot; j++){
			cout<<"\t--------------------------------------\n";		
			cout<<"\t\tKota "<<Neg.Prov[i].Kt[j].Nama<<endl;
			cout<<"\t\tKota "<<Neg.Prov[i].Kt[j].Bupati<<endl;	
		}
	}
	getche();
}
