//TUGAS
#include <iostream> //header program menggunakan perintah cout cin
#include <conio.h> //header program untuk membersihkan layar
#include<stdio.h> //header program untuk input output
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef char String[100];
typedef struct{
	string judul;
	double harga;
}Buku; //nama variabel

typedef struct Node{
	Buku data;
	Node *next;
};

Node *head;

//deklarasi fungsi
void initial(); //initial
int LEmpty(); //lempty
void InsertD(string jdl, double hrg); //insertd
void InsertB(string jdl, double hrg); //insertb
void printL(); //printl
void HapusD(); //hapusd
void HapusB(); //hapusb
void clear(); //clear

