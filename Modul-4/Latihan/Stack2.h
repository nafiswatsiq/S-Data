//HEADER FILE OF STACK
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

stack A; //inisial variabel

//deklarasi fungsi
void inisialisasi(); //inisialisai
void push(int d); //push
void pop(); //pop
int peak(); //peak
void print(); //print
