#include "DLNCHT.cpp" //memanggil file DLNC.cpp

main(){ //procedure main
    cout<<"Nama : NAFIS WATSIQ AMRULLOH";
    cout<<"\n\n";
    cout<<"Nim : 220302017";
    cout<<"\n\n";
    cout<<"Kelas : TI-1A";
    cout<<"\n\n";
    initial(); //memanggil procedure initial
    InsertD(34); //masukan data depan
    InsertB(11); //masukan data belakang
    InsertD(14); //masukan data depan
    cout << "data: ";
    printL(); //tampilkan data
    HapusD(); //dapus data depan
    HapusB(); //hapus data belak7ang
    cout << "\ndata: ";
    printL(); //tampilkan data

    getche(); //menghentikan program
}
