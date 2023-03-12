//HEADER FILE OF LINK LIST NON CIRCULAR
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct Node{
	int data;
	Node *next;
};

Node *head, *tail; //membuat pointer

//deklarasi fungsi
void initial();
int LEmpty();
void InsertD(int d);
void InsertB(int d);
void printL();
void HapusD();
void HapusB();
void clear();
