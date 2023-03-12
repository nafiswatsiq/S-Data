//POINTER PADA ARRAY
#include "Queue.h" //memanggil file queue.h

void inisialisasi(){ //fungsi inisialisasi
	Q.head = Q.tail = -1; //inisial awal dan akhir = -1
	cout <<"Antrian terbentuk \n"; //menampilkan antrian terbentuk
	Sleep(500); //menjeda program 500ms
}

int isEmpty(){ //fungsi isEmpty
	if (Q.tail == -1){ //jika nilai akhir = -1
		return 1; //posisi penuh
	} else{
		return 0; //posisi kosong
	}
}

int isFull(){ //fungsi isFull
	if (Q.tail == MAX-1){
		return 1; //posisi penuh
	} else{
		return 0; // posisi kosong
	}
}

void enqueue(int d){ //fungsi enqueue
	if (isEmpty() == 1){ //jika data kosong = true
		Q.head = Q.tail = 0; //inisial awal dan akhir = 0
		Q.data[Q.tail] = d; //input data
	} else if (isFull() == 0){ //jika dta kosong = false
		Q.tail++; //tail+1
		Q.data[Q.tail] = d; //input data
	} else{
		cout <<"Maaf Antrian sudah penuh"; //menampilkan antrian penuh
	}
}

void dequeue(){ //fungsi dequeue
	for (int i = Q.head; i < Q.tail; i++){ //perulangan
		Q.data[i] = Q.data[i+1]; //memindahkan data
		Q.tail--; //mengurangi tail
	}
}

void printQ(){ //fungsi printQ
	if (Q.tail != -1){
		for (int i = Q.head; i <= Q.tail; i++){ //perulangan
			cout <<Q.data[i] <<" "; //cetak data ke i
			Sleep(500); //menjeda program 500 ms
		}
	}
}
