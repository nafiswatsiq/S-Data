//TUGAS 
#include <iostream> //header program menggunakan perintah cout cin
#include <conio.h> //header program untuk membersihkan layar
#include <windows.h> //header program untuk input output
#define MAX 10 //untuk membatasi nilai max 10
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct{
	string nama;
	long int rekening;
}Nasabah; //nama variabel

typedef struct{
	int head;
	int tail;
	Nasabah data[MAX];
}Queue; //nama variabel

Queue Q; //inisial variabel

//deklarasi fungsi
void inisialisasi(); //inisialisasi
int isEmpty(); //isempty
int isFull(); //isfull
void enqueue(string nama, long int rek); //enqueue
void dequeue(); //dequeue
void printQ(); //print

