//POINTER PADA ARRAY
#include "Stack2.h"

void print(){ //fungsi print
	if(A.top!=-1){ //jika A.top tidak samadengan -1
		for(int i=A.top; i>=0; i--) //untuk i=A.top,i>=0, i--
		cout<<A.data[i] <<"\n"; //menampilkan data 
	}else{ //jika yg lain
		cout<<"\nStack Kosong "; //menampilkan stack kosong
	}
}

void inisialisasi(){ //fungsi inisialisasi
	A.top=-1; //data top
}

void push(int d){ //fungsi push
	if(A.top != max-1){ //jika A.top tidak samadengan max-1
		A.top++; //untuk data top+1
		A.data[A.top]=d;
		cout<<"\nNilai " <<d <<" sudah ditambahkan "; //menampilkan nilai yg sudah ditambah
	}else{ //jika yg lain
		cout<<"\nMaaf element Stack sudah penuh "; //menampilkan maaf elemnt stack penuh
	}
}

void pop(){ //fungsi pop
	if(A.top!=-1){ //jika A.top tidak samadengan max-1 
		cout<<"\nData yang di Pop adalah " <<A.data[A.top]; //menampilkan data di pop adalah
		A.top--; //untuk data top-1
	}else{ //jika yg lain
		cout<<"\nMaaf Stack kosong "; //menampilkan maaf stack kosong
	}
}

int peak(){ //fungsi peak
	return A.data[A.top]; //mengembalikan data 
}
