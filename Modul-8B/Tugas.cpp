#include <iostream> //header program menggunakan perintah cout cin
#include <conio.h> //header program untuk membersihkan layar
#include <windows.h> //header untuk menggunakan sleep
using namespace std; //untuk menggunakan cin cout

//tipe data bentukan
typedef struct Node{
	int data;
	Node *next;
};

Node *head, *tail; //pointer

//deklarasi fungsi
void initial();
int LEmpty();
void InsertD(int d);
void InsertB(int d);
void printL();
void HapusD();
void HapusB();
void clear();

void initial(){ //fungsi initial
	head = tail = NULL; //definikan awal dan akhir dengan null
}

int LEmpty(){ //fungsi lempty
	if (tail == NULL){ //jika akhir kosong
		return 1; //return true
	} else{
		return 0; //return false
	}
}

void InsertD(int d){ //fungsi insertd
	Node* temp; //pointer temp
	Node* baru = new Node; //membuat node baru
	baru->data = d; //masukan data
	baru->next = baru; //data baru selanjutnya = baru
	if (LEmpty() == 1){ //jika data kosong
		head = tail = baru; //definisikan data awal dan akhir dengan data baru
		head->next = head; //definisikan data selanjutnya dengan data awal
		tail->next = tail; //definisikan data akhir selanjutnya dengan data akhir
	} else{
		baru->next = head; //definisikan data baru selanjutnya dengan data awal
		head = baru; //isikan data awal dengan data baru
		tail->next = head; //isikan data akhir selanjutntya dengan data awal
	}
} 

void InsertB(int d){ //fungsi insertb
	Node* temp; //pointer temp
	Node* baru = new Node; //membuat node baru
	baru->data = d; //menyimpan data
	baru->next = baru; //definikan data selanjutnya dengan data baru
	if(LEmpty() == 1){ //jika data kosong
		head = tail = baru; //defisinikan data awal dan akhir dengan data baru
		head->next = head; //isikan data selanjutnya dengan data awal
		tail->next = tail; //isikan data akhir selanjutnya dengan data akhir 
	}else{
		Node* temp = head; //membuat pointer temp
		while(temp->next != head){ //looping sampai data selanjutnya tidak samadengan data awal
            temp = temp->next; //pindahkan data
    	}
		temp->next = baru; //definisikan data semetada dengan data baru
		baru->next = head; //isikan data selanjutnya sengan data awal
	}
} 

void HapusD(){ //fungsi Hapus depan
	if(LEmpty() == 0){ //jika data tidak kosong
		if (head->next != head){ //jika data awal selanjutnya tdk samadengan akhir
			Node* temp = head; //pointer temp
			while (temp->next != head) { //looping sampai data selanjutnya tidak samadengan data awal
                temp = temp->next; //memindahkan data
            }
			Node *hapus = head; //membuat pointer hapus 
			head = head->next; //definiskan head dengan data selanjutnya
			temp->next = head; //isikan data selanjutnya edngan data sementara
			delete hapus; //hapus data 
		}else{
			head = tail = NULL; //data awal dan akhir = null
		}
	}else{
		cout <<"List Kosong"; //menampilkan list kosong
	}
}

void HapusB(){ //fungsi hapus belakang
	if (LEmpty() == 0){ //jika data tidak kosong
		if (head->next != head){ //jika data awal selanjutnya tdk samadengan awal
			Node* temp = head; //pointer temp
			while (temp->next->next != head){ //jika 2 data sementara sselanjutnya tidak samadengan data awal
				temp = temp->next; //pindahkan data
			}
			Node* hapus = temp->next; //membuat pointer hapus
			temp->next = head; //definisikan data selanjutnya dengan data awal 
			delete hapus; //hapus data 
		} else{
			head = tail = NULL; //data awal dan akhir = null
		}
	} else{
		cout <<"List Kosong"; //menampilkan list kosong
	}
}

void  printL(){ //fungsi tampilkan data
	Node *temp = head; //membuat pointer temp
	if (LEmpty() == 0){ //jika data tidak kosong
		do{
			cout <<temp->data <<" "; //tampilkan data
			temp = temp->next; //definisikan data sementara dengan data selanjutnya 
		}while (temp != head); //loop hingga data habis
	} else{
		cout <<"List Kosong"; //menampilkan list kosong
	}
}

void clear(){ //fungsi hapus semua data
	Node *temp = head; //membuat pointer temp
	Node *hapus; //membuat pointer hapus
	while (temp->next != head){ //loop sampai data selanjutnya tidak samadengan data awal
		hapus = temp; //definiskan data awal dengan data sementara
		temp = temp->next; //pindahkan data sementara ke data selanjutnya
		delete hapus; //hapus data
	}
	head = tail = NULL; //definisikan data awal dan akhir dengan
}

main(){
    initial();
	//deklarasi variabel
	char jawab;
	int no, data;
	do{
		system("cls"); //membersihkan layar

		cout <<"=====================================\n";
		cout <<"  Menu Linked List dengan HEAD TAIL  ";
		cout <<"\n=====================================\n";
		cout <<"1. Tambah Data di Depan";
		cout <<"\n2. Tambah Data di Belakang";
		cout <<"\n3. Hapus Data di Depan";
		cout <<"\n4. Hapus Data di Belakang";
		cout <<"\n5. Tampil Data"; 
		cout <<"\n6. Clear Data"; 
		cout <<"\n=====================================\n";
		
		cout <<"\nPilih Menu : "; //input pilih menu
		cin >>no; //menyimpan input jawaban

		if (no == 1 || no == 2){ //jika pilihan 1 atau 2
			cout <<"\nMasukkan data List : "; //menampilkan masukkan data list
			cin >>data; //menyimpan input data 
		} 
			if(no == 1){ //jika pilihan 1
				InsertD(data); //memanggil fungsi insert depan
			} else if(no == 2){ //jika pilihan 2
				InsertB(data); //memanggil fungsi insert belakang		
			} else if(no == 3){ //jika pilihan 3
				HapusD(); //memanggil fungsi hapus depan
			} else if(no == 4){ //jika pilihan 4
				HapusB(); //memanggil fungsi hapus belakang
			} else if(no == 5){ //jika pilihan 5
				printL(); //panggil fungsi tampilkan data
			} else if(no == 6){ //jika pilihan 6
				clear(); //panggil fungsi clear
			}
			
			cout <<"\n\nIsi List terbaru : \n"; //menampilkan isi list terbaru
			printL(); //memanggil fungsi tamppilkan data
					
		cout <<"\n\n\nIngin kembali ke Menu ? (Y/N) "; //meampilkan opsi kembali ke menu
		cin >>jawab; //menyimpan input pilihan
	}while(jawab == 'Y' || jawab == 'y'); //jika jawaban y maka mengulang program

    getche(); //meghentikan program
}


