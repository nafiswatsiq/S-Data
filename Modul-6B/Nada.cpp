#include "nada.h" //memanggil file LLNCHT.h

void initial(){ //fungsi inisialisasi
	head = tail = NULL; //isikan data awal dan akhir dengan null
}

int LEmpty(){ //fungsi jika kosong
	if (head == NULL){ //jika data awal = null
		return 1; //return true
	} else{
		return 0; //return false
	}
}

void InsertD(int d){ //fungsi Insert depan
	Node *baru = new Node; //membuat node baru
	baru->data = d; //menambahkan data list baru
	baru->next = NULL; //pointer list di isi kosong
	if (LEmpty() == 1){ //jika data kosong = true
		head = tail = baru; //definisikan data awal dan akhir = baru
		head->next = NULL; //isi data selanjutnya dengan null
	} else{ //jika tidak
		baru->next = head; //pindahkan data selanjutnya dengan data awal
		head = baru; //isikan data wal dengan data baru
	}
}

void InsertB(int d){ //fungsi Insert belakang
	Node *baru = new Node; //membuat node baru
	baru->data = d; //menambahkan data list baru
	baru->next = NULL; //pointer list di isi kosong
	if (LEmpty() == 1){ //jika data kosong = true
		head = tail = baru; //definisikan data awal dan akhir = baru
		tail->next = NULL; //isi data selanjutnya dengan null
	} else{ //jika tidak
		tail->next = head; //pindahkan data akhir ke data awal
		tail = baru; //isikan data akhir dengan data baru
	}
}

void printL(){ //fungsi tampilkan data
	Node *temp = head; //membuat pointer temp
	if (LEmpty() == 0){ //jika data tidak kosong
		while (temp != NULL){ //looping sampai data tidak null
			cout <<temp->data <<" "; //tampilkan data
			temp = temp->next; //pindahkan indek ke data selanjutnya
		}
	} else{ //jika tidak
		cout <<"List Kosong "; //menampilkan list kosong 
	}
}

void HapusD(){ //fungsi Hapus depan
	if (LEmpty() == 0){ //jika data tidak kosong
		if(head->next != NULL){ //jika data selanjutnya tidak null
			Node *temp = head; //membuat node temp
			head = head->next; //pindahkan data ke depan
			delete temp; //hapus data
		} else{ //jika tidak
			head = tail = NULL; //efinisikan data awal dan akhir  dengan null  
		} 
	} else{ //jika tidak
		cout <<"List Kosong "; //menampilkan list kosong
	}
}

void HapusB(){ //fungsi Hapus belakang
	if (LEmpty() == 0){ //jika data tidak kosong
		if(head != tail){ //jika data awal tidak samadengan data akhir
			Node *temp = head; //membuat node temp
			Node *del; //membuat node del
			while (temp->next != tail){ //looping jika data awal tidak samadngan akhir 
				temp = temp->next; //pindahkan data
			}
			del = tail; //definisi delete dengan data akhir
			tail = temp; //definisikan data akhir dengan dengan data sementara
			delete del; //hapus data akhir
			temp->next = NULL; //isikan data selanjutnya degan null
		} else{ //jika tidak
			head = tail = NULL; //edfinisakn data awal dan akhir dengan null 
		} 
	} else{ //jika tidak
		cout <<"List Kosong "; //menampilkan list kosong
	}
}

void Play(){ //fungsi Play
	Node *temp = head; //membuat node temp baru
	if (LEmpty() == 0){ //jika data tidak kosong
		int frekuensi; //deklarasi variabel
		while (temp != NULL){ //looping sampai data tidak null
			frekuensi = temp->data; //definisikan frekuensi dengan data
			cout << "Nada" << temp->data <<" \n"; //tampilkan data
			Beep(1000 * nada[frekuensi], 1000 ); //bunyikan data
			temp = temp->next; //pindahkan indek ke data selanjutnya
			Sleep(500); //jeda program selama 500ms
		}
	} else{ //jika data kosong
		cout <<"List Kosong "; //menampilkan list kosong
	}
}
