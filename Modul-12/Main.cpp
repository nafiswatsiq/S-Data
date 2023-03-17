#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef struct Node
{
    string nama;
    int nim;
    Node *nextNama;
    Node *prevNama;
    Node *nextNim;
    Node *prevNim;
};

Node *headNama, *tailNama, *headNim, *tailNim;

void initial(){
    headNama = NULL;
    headNim = NULL;
}

int Empty(){
    if(headNama == NULL && headNim == NULL){
        return 1;
    }else{
        return 0;
    }
}

void Insert(string nama, int nim){
    Node *namaBaru = new Node;
    Node *nimBaru = new Node;

    namaBaru->nama = nama;
    namaBaru->nextNama = namaBaru;
    namaBaru->prevNama = namaBaru;
    nimBaru->nim = nim;
    nimBaru->nextNim = nimBaru;
    nimBaru->prevNim = nimBaru;

    if(Empty() == 1){
        headNama = namaBaru;
        headNama->nextNama = headNama;
        headNama->prevNama = headNama;

        headNim = nimBaru;
        headNim->nextNim = headNim;
        headNim->prevNim = headNim;
    }else{
        Node *tempNama = headNama->prevNama;
        namaBaru->nextNama = headNama;
        headNama->prevNama = namaBaru;
        headNama = namaBaru;
        headNama->prevNama = tempNama;
        tempNama->nextNama = headNama;

        Node *tempNim = headNim->prevNim;
        nimBaru->nextNim = headNim;
        headNim->prevNim = nimBaru;
        headNim = nimBaru;
        headNim->prevNim = tempNim;
        tempNim->nextNim = headNim;
    }
}

void Print(){
    Node *tempNama = headNama;
    Node *tempNim = headNim;
    if(Empty() == 0){
        do{
            cout << "Nama: " << tempNama->nama << "\nNIM: " << tempNim->nim << endl;
            tempNama = tempNama->nextNama;
            tempNim = tempNim->nextNim;
        } while (tempNama != headNama && tempNim != headNim);
        
    }else{
        cout << "list Kosong";
    }
}

void Hapus(){
    if(Empty() == 0){
        if(headNama->nextNama != headNama && headNim->nextNim != headNim){
            Node *hapusNama = headNama;
            Node *tempNama = headNama->prevNama;
            headNama = headNama->nextNama;
            tempNama->nextNama = headNama;
            headNama->prevNama = tempNama;
            delete hapusNama;

            Node *hapusNim = headNim;
            Node *tempNim = headNim->prevNim;
            headNim = headNim->nextNim;
            tempNim->nextNim = headNim;
            headNim->prevNim = tempNim;
            delete hapusNim;
        }else{
            headNama = NULL;
            headNim = NULL;
        }
    }else{//jika tidak
        cout << "List Kosong";//menampilkan list kosong
    }
}

main(){
    char jwb;
    string nama;
    int nim;
    do{
        system("cls");
        cout << "nama: ";
        cin >> nama;
        cout << "nim: ";
        cin >> nim;

        // cout << dt.nama << dt.nim;
        Insert(nama, nim);
        cout << "\ntampilkan\n";
        Print();

        cout << "hapus? y";
        cin >> jwb;
        if(jwb == 'y'){
            Hapus();
        }

        cout << "\nUlangi?";
        cin >> jwb;

    }while(jwb == 'y');
}