//LATIHAN
#include <iostream> //header program menggunakan perintah cout cin
#include <conio.h> //header program untuk membersihkan layar
#include <windows.h> //header untuk menggunakan beep
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct Node{
    int data;
    Node *next;
};

Node *head; //membuat pointer

//deklarasi fungsi
void initial();
int LEmpty();
void InsertD(int d); 
void InsertB(int d);
void printL();
void HapusD(); 
void HapusB();
void clear();

main(){
    initial(); //memanggil fungsi initial
    InsertD(23); //memanggil fungsi insert edpan
    InsertD(20); //memanggil fungsi insert depan
    InsertB(9); //memanggil fungsi insert belakang
    InsertB(7); //memanggil fungsi insert belakang
    printL(); //memanggil fungsi tampilkan data
    //clear();
    //cout <<"\n Hasil setelah di clear all : \n";
    //printL();
    HapusD(); //memanggil fungsi hapus depan
    HapusB(); //memanggil fungsi hapus belakang
    cout <<"\n\n";
    printL(); //memanggil fungsi tampilkan data
    clear(); //memanggil fungsi clear
    cout <<"\n\n";
    printL(); //memanggil fungsi tampilkan data

    getche(); //meghentikan program
}

void initial(){
	head = NULL; //definisikan head dengan null
}

int LEmpty(){
	if (head == NULL){ //jika data awal null
		return 1; //return true
	} else{ //jika tidak
		return 0; //return false
	}
}

void InsertD(int d){
    Node *temp; //membuat pointer
	Node *baru = new Node; //membuat node baru
	baru->data = d; //menyimpan data list baru
	baru->next = baru; //isikan data selanjutnya dengan data baru
	if (LEmpty() == 1){ //jika data kosong
		head = baru; //isikan data awal dengan data baru
		head->next = head; //pindahkan data head ke indeks selanjutnya
	} else{
        temp = head; //edfinisikan data sementara dengan data awal
        while (temp->next != head){ //looping sampai data selanjutnya tidak samadengan data awal
            temp = temp->next; //pindahkan data sementara
        }
		baru->next = head; //pindahkan data selanjutnya denga data awal
		head = baru; //isikan data awal dengan data baru
        temp->next = head; //pindahkan data selanjutnya dengan data awal
	}
}

void InsertB(int d){ //fungsi Insert belakang
	Node *baru = new Node; //membuat node baru
    Node *temp; //membuat pointer temp
	baru->data = d; //menambahkan data list baru
	baru->next = baru; //pindahkan data baru ke data selanjutnya
	if (LEmpty() == 1){ //jika data tidak kosong
		head = baru; //definisikan data awal dengan data baru
		head->next = head; //definisikan data selanjutnya dengan data awal
	} else{
        temp = head; //definiskan data sementara dengan data awal
        while (temp->next != head){ //looping sampai data selanjutnya tidak samadengan data awal
            temp = temp->next; //pindahkan data sementara
        }
        temp->next = baru; //definiskan data sementara dengan data baru
		baru->next = head; //isikan data baru selanjutnya dengan data awal
	}
}

void HapusD(){ //fungsi Hapus depan
	if (LEmpty() == 0){ //jika data tidak kosong
		if(head->next != head){  //jika data selanjutnya tidak samadengan data awal
            Node *hapus = head; //membuat pointer hapus
			Node *temp = head; //membuat pointer hapus
            while (temp->next != head){ //looping data sampai tidak samadengan data awal
            	temp = temp->next;//pindahkan data sementara
        	}
			head = head->next; //definisikan data awal dengandata selanjutnya
			delete hapus; //hapus data
            temp->next = head; //isikan data sementara dengan data awal
		} else{
			head = NULL; //definisikan data awal dengan null
		} 
	} else{
		cout <<"List Kosong "; //tampilkan list ksong
	}
}

void HapusB(){
	if (LEmpty() == 0){ //jika data tidak kosong
		if(head->next != head){ //jika data selanjutnya tidak samadengan data awal
			Node *temp = head; //membuat pointer hapus
			Node *hapus = head; //membuat pointer hapus
			while (temp->next->next != head){ //looping data sampai tidak samadengan data awal
				temp = temp->next; //pindahkan data sementara
			}
            hapus = temp->next; //definisikan hapus dengan data selanjutnya
            temp->next = head; //isikan data selanjutnya dengan data awal
            delete hapus; //hapus data
		} else{
			head = NULL; //definisikan data awal dengan null
		} 
	} else{
		cout <<"List Kosong "; //tampilkan list ksong
	}
}

void printL(){
	Node *temp = head; //membuat pointer temp
	if (LEmpty() == 0){ //jika data tidak kosong
		do{
			cout <<temp->data <<" "; //tampilkan data
			temp = temp->next; //isikan data sementara dengan data selanjutnya 
            Sleep(20); //jeda program
        }while (temp != head);	//looping data sampai tidak samadengan data awal
	} else{ //jika kosong
		cout <<"List Kosong "; //tampilkan data kosong 
	}
}

void clear(){
    Node *temp = head; //membuat pointer temp
    Node *hapus; //membuat pointer hapus
    while (temp->next != head){ //looping data sampai tidak samadengan data awal
        hapus = temp; //definikan hapus dengan data semntara
        temp = temp->next; //definisikan data sementara dengan data selanjutnya
        delete hapus; //hapus data
    }
    delete temp; //hapus data sementara
    head = NULL; //definisikan data awal dengan null
}
