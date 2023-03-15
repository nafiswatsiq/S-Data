#include "DLLC.h" //memanggil file DLNC.h

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
    baru->next = baru; //definisikan next dengan data baru
    baru->prev = baru; //definiskan sebelumnya dengan data baru

    if(LEmpty() == 1){ //jika data kosong = true
        head = baru; //definiskan data awal dengan data baru
        head->next = head; //definisikan data next dengan data baru
        head->prev = head; //definisikan data sebelumnya dengan data baru
    }else{ //jika tidak
        Node *temp = head->prev; //buat pointer temp
        baru->next = head; //definisikan data selanjutnya dengan data awal
        head->prev = baru; //definisikan data sebelumnya dengn data baru
        head = baru; //definisikan data awal dengan data baru
        head->prev = temp; //definisikan data head sebelumnya dengan data temp
        temp->next = head; //definiskan data temp selanjutnya dengan data head
    }
}

void InsertB(int d){ //fungsi Insert belakang
    Node *baru = new Node; //membuat node baru
    Node *temp; //membuat pointer temp
    baru->data = d; //menambahkan data list baru
    baru->next = baru; //definisikan next dengan data baru
    baru->prev = baru; //definiskan sebelumnya dengan data baru

    if(LEmpty() == 1){ //jika data kosong = true
        head = baru; //definisikan data awal dengan data baru
        head->next = head; //definisikan data next dengan data awal
        head->prev = head; //definisikan data sebelumnya dengan data awal
    }else{ //jika tidak
        temp = head->prev; //definisikan data temp dengan data awal sebelumnya
        temp->next = baru; //definiskan temp selanjutnya dengan data baru
        baru->prev = temp; //defisinikan data baru sebelumya dengan data temp
        baru->next = head; //definiskan data next dengan data head
        head->prev = baru; //definsikan data head sebelumnya dengan data baru
    }
}

void printL(){ //procedure tampilkan data
    Node *temp = head; //membuat node temp
    if(LEmpty() == 0){ //jika data tidak kosong
        do{
            cout << temp->data << " "; //tampilkan data
            temp = temp->next;//pindahkan indek ke data selanjutnya
        } while (temp != head); //looping jika data temp tidak samadengan head
        
    }else{//jika tidak
        cout << "list Kosong";//menampilkan list kosong 
    }
}

void HapusD(){ //procedure hapus depan
    if(LEmpty() == 0){ //jika data tidak kosong
        if(head->next != head){ //jika data selanjutnya tidak null
            Node *hapus = head; //membuat pointer hapus
            Node *temp = head->prev; //membuat pointer temp
            head = head->next; //definiskan data head dengan data head selanjutnya
            temp->next = head; //definsikan data temp selanjutnya dengan data head
            head->prev = temp; //definsikan data head selanjutnya dengan data temp
            delete hapus; //hapus data
        }else{
            head = NULL; //definisikan data awal dengan null
        }
    }else{//jika tidak
        cout << "List Kosong";//menampilkan list kosong
    }
}

void HapusB(){//procedure hapus belakang
    if(LEmpty() == 0){//jika data tidak kosong
        if(head->next != head){//jika data selanjutnya tidak null
           Node *temp = head->prev->prev; //membuat pointer temp
           Node *hapus = temp->next; //membuat pointter hapus
           temp->next = head; //definsikan data temp selanjutnya dengan data awal
           head->prev = temp; //definisikan data awal sebelumnya dengan data sementara
            delete hapus; //hapus data
        }else{ //jika tidak
            head = NULL; //definisikan data awal dengan null
        }
    }else{//jika tidak 
        cout << "List Kosong";//tampilkan list kosong
    }
}

void clear(){ //procedure clear data
    Node *temp = head; //membuat pointer temp
    Node *hapus; //membuat pointer hapus
    while(temp->next != head){ //looping jika data temp selanjutnya tidak samadengan head
        hapus = temp; //definsikan hapus dengan data temp
        temp = temp->next; //defisnikan data temp dengan data selanjutnya
        delete hapus; //hapus data
    }
    delete temp; //hapus temp
    head = NULL;//definsikan data head dengan NULL
}