//TUGAS
#include <iostream> //header program menggunakan perintah cout cin
#include <conio.h> //header program untuk membersihkan layar
#include <math.h>
#include <windows.h>
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct Node{
	int data;
    Node *next;
};

double nada[7]; //deklarasi nada
Node *head, *tail; //membuat pointer

//deklarasi fungsi
void initial();
int LEmpty();
void InsertD(int d);
void InsertB(int d);
void printL();
void HapusD();
void HapusB();
void Play();



