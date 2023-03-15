#include "DLNCHT.h" //memanggil file DLNC.h

void initial(){ //fungsi inisialisasi
    head = NULL; //isikan data awal dan akhir dengan null
}

int LEmpty(){ //procedure jika kosong
    if(head == NULL){ //jika data awal = null
        return 1; //return true
    }else{ //jika tidak
        return 0; //return false
    }
}

void InsertD(int d){ //fungsi Insert depan
    Node *baru = new Node; //membuat node baru
    baru->data = d; //menambahkan data list baru
    baru->next = NULL; //definisikan next dengan null
    baru->prev = NULL; //definiskan sebelumnya dengan null

    if(LEmpty() == 1){ //jika data kosong = true
        head = baru; //definisikan data awal dengan data baru
        tail = head;
        head->next = NULL; //definisikan data awal next dengan null
        head->prev = NULL; //definisikan data awal sebelumnya dengan null
        tail->next = NULL; //definisikan data akhir next dengan null
        tail->prev = NULL; //definisikan data akhir sebelumnya dengan null
    }else{ //jika tidak
        baru->next = head; //definisikan data selanjutnya dengan data awal
        head->prev = baru; //definisikan data sebelumnya dengn data baru
        head = baru; //definisikan data awal dengan data baru
    }
}

void InsertB(int d){ //fungsi Insert belakang
    Node *baru = new Node; //membuat node baru
    Node *temp; //membuat pointer temp
    baru->data = d; //menambahkan data list baru
    baru->next = NULL; //definisikan next dengan null
    baru->prev = NULL; //definiskan sebelumnya dengan null

    if(LEmpty() == 1){ //jika data kosong = true
        head = baru; //definisikan data awal dengan data baru
        head->next = NULL; //definisikan data next dengan null
        head->prev = NULL; //definisikan data sebelumnya dengan null
        tail->next = NULL; //definisikan data akhir next dengan null
        tail->prev = NULL; //definisikan data akhir sebelumnya dengan null
    }else{ //jika tidak
        tail->next = baru; //definiskan data akhir selanjutnya dengan data baru 
        baru->prev = tail; //defisnisikan data baru delanjutya dengan data akhir
        tail = baru; //defisisikan data akhir dengan data baru
        tail->next = NULL; //defisinikan data akhir selanjutnya dengn null
    }
}

void printL(){ //procedure tampilkan data
    Node *temp = head; //membuat node temp
    if(LEmpty() == 0){ //jika data tidak kosong
        while(temp != NULL){ //looping jika data sementara tidak null
            cout << temp->data << " "; //tampilkan data
            temp = temp->next;//pindahkan indek ke data selanjutnya
        }
    }else{//jika tidak
        cout << "list Kosong";//menampilkan list kosong 
    }
}

void HapusD(){ //procedure hapus depan
    if(LEmpty() == 0){ //jika data tidak kosong
        if(head->next != NULL){ //jika data selanjutnya tidak null
            Node *hapus = head; //membuat node hapus
            head = head->next; //pindahkan data ke depan
            head->prev = NULL; //definiskan data sebelumnya dengan Null
            delete hapus; //hapus data
        }else{
            head = tail = NULL; //definisikan data awal dengan null
        }
    }else{//jika tidak
        cout << "List Kosong";//menampilkan list kosong
    }
}

void HapusB(){//procedure hapus belakang
    if(LEmpty() == 0){//jika data tidak kosong
        if(head->next != NULL){//jika data selanjutnya tidak null
            Node *hapus = tail;//membuat node hapus
            tail = tail->prev; //pindehkan data akhir ke data senlajutnya
            tail->next = NULL; //defisisikan data ahhir dengan null
            delete hapus;
        }else{ //jika tidak
            head = tail = NULL; //definisikan data awal dengan null
        }
    }else{//jika tidak 
        cout << "List Kosong";//tampilkan list kosong
    }
}

void clear(){ //procedure clear data
    Node *bantu, *hapus; //memuat pointer
    bantu = head; //definsikan bantu dengan data awal
    while(bantu != NULL){ //looping jika bantu tidak samadengan null
        hapus = bantu; //definisikan hapus dengan bantu
        bantu = bantu->next; //definsikan bantu dengan data selanjutnya
        delete hapus; //hapus data
    }
    head = tail = NULL; //definisikan data awal dengan null 
}