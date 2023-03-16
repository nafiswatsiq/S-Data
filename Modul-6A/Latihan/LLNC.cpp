//LLNC.cpp
#include "LLNC.h" //memanggil file LLNC.h

void initial(){ //fungsi initial
	head = NULL;
}

int LEmpty(){ //fungsi LEmpty
	if (head == NULL){ //jika head = null
		return 1; //true
	} else{
		return 0; //false
	}
}

void InsertD(int d){ //fungsi InsertD
	Node *baru = new Node; //membuat node baru
	baru->data = d; //data list baru
	baru->next = NULL; //pinter list di isi kosong
	if (LEmpty() == 1){ //jika data kosong = true
		head = baru; //data awal ke baru 
		head->next; //isi next dengan head
	} else{
		baru->next = head; //simpan data baru jdi head
		head = baru; //data awal ke baru
	}
}

void InsertB(int d){ //fungsi InsertB
	Node *baru = new Node;; //membuat node baru
	Node *temp; //deklarasi
	baru->data = d; //data list baru
	baru->next = NULL; //pinter list di isi kosong
	if (LEmpty() == 1){ //jika data kosong = true
		head = baru; //data awal ke baru
		head->next = NULL; //menyimpan head node dgn nol
	} else{
		baru->next = head; //simpan data baru jdi head
		while(temp->next != NULL){ //perulangan mencari node paling ujung
			temp = temp->next; //simpan data temp dengan data next
		}
		temp->next = baru; //simpan data next dgn data baru
	}
}

void printL(){ //fungsi printL
	Node *temp = head; //membuat node temp baru
	if (LEmpty() == 0){ //jika data kosong = true
		while (temp != NULL){
			cout <<temp->data <<" "; //input data
			temp = temp->next; //simpan data temp dgn data next
		}
	} else{
		cout <<"\nList Kosong "; //meanmpilkan list kosong
	}
}

void HapusD(){ //fungsi HapusD
	if (LEmpty() == 0){ //jika data kosong = true
		if(head->next != NULL){
			Node *temp = head; //membuat node temp baru
			head = head->next; //simpan data head dgn data next
			delete temp; //menghapus temp
		} else{
			head = NULL; //simpan head dgn data null 
		} 
	} else{
		cout <<"\nList Kosong "; //menampilkan list kosong
	}
}

void HapusB(){ //fungsi HapusB
	if (LEmpty() == 0){ //jika data kosong = true
		if(head->next != NULL){
			Node *temp = head; //membuat node temp baru
			while (temp->next->next != NULL){
				temp = temp->next; //simpan data temp dgn data next
				delete temp->next; //menghapus temp
				temp->next = NULL; //simpan data temp dgn data null
			}
		} else{
			head = NULL; //simpan head dgn data null
		} 
	} else{
		cout <<"\nList Kosong "; //menampilkan list kosong
	}
}
