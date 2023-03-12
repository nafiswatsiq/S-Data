//MAIN PROGRAM OF QUEUE
#include "Queue.cpp" //memanggil file queue
#include <stdlib.h> //header program untuk oprasi pembanding dan konversi

main(){
	//deklarasi
	char jawab;
	int no;
	inisialisasi(); //memanggil  fungsi inisialisasi
	
	do{
		//menghapus layar
		system("cls");
		//menampilkan
		cout <<"========================\n";
		cout <<"       Menu Queue      ";
		cout <<"\n========================\n";
		cout <<"1. EnQueue "; //enqueue
		cout <<"\n2. DeQueue "; //dequeue
		cout <<"\n------------------------\n";
		cout <<"Isi Antrian : "; //isi antrian		
		printQ(); //memanggil fungsi printq
		cout <<"\n========================\n";
		
		cout <<"\n\nPilih Menu : "; //menampilkan  pilih menu
		cin >>no; //menyimpan input jwaban
		
		if (no == 1){ //jika pilihan samdengan 1
			//deklarasi
			int data;
			cout <<"\nMasukkan data Antrian : "; //menampilkan masukkan data antian
			cin >>data; //menyimpan input data
			enqueue(data); //memanggil fungsi data
			cout <<"\n\nIsi Antrian terbaru : "; //menampikan isi antrian baru
			printQ(); //memanggil fungi printq		
		} else if(no == 2){ //jika pilihan samadengan 2
			cout <<"\nDequeue Antrian "; //menampilkan dequeue antrian
			dequeue(); //memanggil fungsi dequeue
			cout <<"\n\nIsi Antrian terbaru : "; //menampilkan isi antrian baru
			printQ(); //memanggil fungsi printQ
		}
		
		cout <<"\n\n\nIngin kembali ke Menu ? (Y/N) "; //meampilkan opsi kembali ke menu
		cin >>jawab; //menyimpan input pilihan
	}
	
	while(jawab == 'Y' || jawab == 'y'); //perulangan
	getche(); //menghentikan program
}

