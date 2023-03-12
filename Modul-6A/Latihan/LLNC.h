//LLNC.h
#include <iostream> //header program menggunakan perintah cout cin
#include <conio.h> //header program untuk membersihkan layar
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct Node{
	int data;
	Node *next;
};

Node *head;

//deklarasi fungsi
void initial(); //initial
int LEmpty(); //lempty
void InsertD(int d); //insertd
void InsertB(int d); //insertb
void printL(); //printl
void HapusD(); //hapusd
void HapusB(); //hapusb

