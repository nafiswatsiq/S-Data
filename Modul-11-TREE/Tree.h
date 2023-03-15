#include <iostream>
#include <conio.h>

using namespace std;

//tipe data bentukan
typedef struct Tree{
    int data; //deklarasi data
    Tree *left; //pointer daun kiri
    Tree *right; //pointer daun kanan
};

Tree *root; //membuat pointer root
//deklarasi fungsi
void add(Tree **root, int d);
void preOrder(Tree *root);
void inOrder(Tree *root);
void postOrder(Tree *root);
int cari(Tree *root, int data);
void cek(Tree *root, int data);
int count(Tree *root);
int height(Tree *root);
void leaf(Tree *root);

