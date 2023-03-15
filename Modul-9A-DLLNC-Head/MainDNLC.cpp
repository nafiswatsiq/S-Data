#include "DLNC.cpp" //memanggil file DLNC.cpp

main(){ //procedure main
    initial(); //memanggil procedure initial
    InsertD(34); //masukan data depan
    InsertB(11); //masukan data belakang
    InsertD(14); //masukan data depan
    cout << "data: ";
    printL(); //tampilkan data
    HapusD(); //dapus data depan
    HapusB(); //hapus data belakang
    cout << "\ndata: ";
    printL(); //tampilkan data

    getche(); //menghentikan program
}