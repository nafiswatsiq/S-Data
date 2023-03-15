#include <iostream>
#include <conio.h>

using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head; //membuat pointer
//deklarasi fungsi dan procedure
void initial();
int LEmpty();
void InsertD(int d);
void InsertB(int d);
void printL();
void HapusD();
void HapusB();