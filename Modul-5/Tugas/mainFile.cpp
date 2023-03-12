#include <stdlib.h> //header untuk operasi pembanding konversi
#include "file.cpp" //memanggil file.h

main()
{
	inisialisasi();  //memmanggil fungsi inisialisasi
	
	//memanggil fungsi
	enqueue("Arman", 33123); //enqueue arman
	enqueue("Bejo", 46621); //enqueue bejo
	enqueue("Nada", 93384); //enqueue nada
	enqueue("Wahyu", 12293); //enqueue wahyu
	enqueue("Najib", 91102); //enqueue najib
	printQ(); //printQ
	dequeue(); //dequeue
	printQ(); //printQ
	dequeue(); //dequeue
	printQ(); //printQ
	
	getche(); //menghentikan program
}

