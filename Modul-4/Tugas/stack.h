//TUGAS
#include<iostream> //header program menggunakan perintah cout cin
#include<conio.h> //header program untuk membersihkan layar
#include<stdlib.h> //header program untuk oprasi pembanding dan konversi
#define max 10 //untuk mensubtitusikan suatu teks dalam program
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct{
	int top;
	int data[max];
}stack; //nama variabel

stack A; //inisila variabel

//deklarasi fungsi
void inisialisasi();
void push(int d);
void pop();
int peak();
int ada(int N);
int indeks(int N);
void swap(int N);
void print();
