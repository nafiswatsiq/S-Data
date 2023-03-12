//POINTER PADA ARRAY
#include "stack.h"

void print(){
	if(A.top!=-1){ //jika top stak tidak samadengan 1
		for(int i=A.top; i>=0; i--) //perulangan stak
			cout<<A.data[i] <<"\n"; //menampilkan data stak
	}else{ //jika tidak
		cout<<"\nStack Kosong "; //stack kosong
	}
}

void inisialisasi(){ 
	A.top=-1; //inisialisasi top stack = -1
}

void push(int d){
	if(A.top != max-1){ //jika stack tidak penuh
		A.top++; //incriment top stack
		A.data[A.top]=d; //menambahhkan value pada top stack
		cout<<"\nNilai " << d <<" sudah ditambahkan "; //tampilkan data ditambahkan
	}else{ //jika tidak
		cout<<"\nMaaf element Stack sudah penuh "; //tampilkan stack penuh
	}
}

void pop(){
	if(A.top!=-1){ //jika stack tidak kosong
		cout<<"\nData yang di Pop adalah " <<A.data[A.top]; //tampilkan data
		A.top--; //decriment stack
	}else{ //jika kosong
		cout<<"\nMaaf Stack kosong "; //tampilkan stack kosong
	}
}

int peak(){
	return A.data[A.top]; //mengembalikan data stack
}

int ada(int N) {
    for(int i = 0; i <= A.top; i++) { //perulangan stack
        if (A.data[i] == N) { // jika data stack = nilai
            return 1; //kembalikan nilai 1
        }
    }
    return 0; //jika tidak ada kembalikan nilai 0
}

int indeks(int N) {
    for(int i = 0; i <= A.top; i++) { //perulagan stack
        if (A.data[i] == N) { //jika data stack = nilai
            return i; //kembalikan nilai indeks stack
        }
    }
    return -1; //jika tidak kembalikan nilai -1
}

void swap(int N) {
    if(ada(N)) { //jika terdapat stack
        int i = indeks(N); //deklarasi i
        int temp = A.data[i]; //deklarasi temp
        int awal = A.data[A.top]; //deklarasi awal
        A.data[i] = A.data[A.top]; //swap data top ke data awal
        A.data[A.top] = temp; //swap data awal ke data top
        cout << "\nNilai " << awal << " berhasil ditukar dengan nilai " << N << endl;
    }else{ //jika tidak terdapat stack
        cout << "\nNilai " << N << " tidak ditemukan di dalam stack\n";
    }
}

