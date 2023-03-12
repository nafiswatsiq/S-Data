//TUGAS
#include "file.h" //memanggil file.h
#include <iomanip> //untuk memformat angka menjadi dua digit dengan menambahkan nol pada angka tunggal

void inisialisasi(){ //fungsi inisialisasi
	Q.head = Q.tail = -1; //inisial awal dan akhir = -1
	cout << "Urutan Antrian Bank\n\n"; //menampilkan urutan antrian
	Sleep(500); //menjeda program 500ms
}

int isEmpty(){ //fungsi isEmpty
	if (Q.tail == -1){ //jika nilai akhir = -1
		return 1; //true
	} else{ 
		return 0; //false
	}
}

int isFull(){ //fungsi isFull
	if (Q.tail == MAX-1){
		return 1; //true
	} else{
		return 0; //false
	}
}

void enqueue(string nama, long int rek){  //fungsi enqueue
	if (isEmpty() == 1){ //jika data kosong = true
		Q.head = Q.tail = 0; //insial awal dan akhir = 0
		Q.data[Q.tail].nama = nama; //input data nama 
		Q.data[Q.tail].rekening = rek; //input data rekening
	} else if (isFull() == 0){ //jika data kosong = false 
		Q.tail++; //tail+1
		Q.data[Q.tail].nama = nama; //input data nama
		Q.data[Q.tail].rekening = rek; //input data rekening
	} else{
		cout <<"Maaf Antrian sudah penuh"; //menampiklan maaf antrian penuh
	}
}

void dequeue(){ //fungsi dequeue
	for (int i = Q.head; i < Q.tail; i++){ //perulangan
		Q.data[i] = Q.data[i+1]; //memindahkan data
	}
	Q.tail--; //mengurangi indeks
}
 
void printQ(){ //fungsi printQ
	if (Q.tail != -1){ //jika nilai akhir tidak samadengan -1
		int j = 1; //deklarasi
		//menampilkan
		cout << "No\t" << "Nama\t" << "\tRekening\n" ; //no, nama, rekening
		cout << "======================================" <<endl;
		for (int i = Q.head; i <= Q.tail; i++){ //perulangan
			cout << setw(2) << setfill('0') << j++ << "\t"; //menampilkan urut nomor
			cout <<Q.data[i].nama <<" \t\t"; //input data nama 
			cout <<Q.data[i].rekening <<"\t " << endl; //input data rekening
			Sleep(500); //menjeda program 500ms
		}
		cout << "Antrian sudah terlayani\n"; //menampilkan antrian terlayani
		cout << "Antrian selanjutnya: \n"; //menampilkan selanjutnya
	}
}
