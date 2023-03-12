//HEAD FILE OF POINTER
#include <iostream> //header program menggunakan perintah cout cin
#include <conio.h> //header program untuk membersihkan layar
#include <stdlib.h> //header program untuk oprasi pembanding dan konversi
#include <windows.h> //header program untuk input output
#define MAX 6 //untuk mensubtitusikan suatu teks dalam program
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct{
	int head;
	int tail;
	int data[MAX];
}Queue; //nama variabel

Queue Q; //inisila variabel

//deklarasi fungsi
void inisialisasi(); //inisialisasi
int isEmpty(); //isempty
int isFull(); //isfull
void enqueue(int d); //enqueue
void dequeue(); //dequeue
void printQ(); //print
