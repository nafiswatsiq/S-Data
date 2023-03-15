#include "Tree.h" //memanggil file Tree.h

void add(Tree **root, int d){ //funsi menambahkan
    if(*root == NULL){ //jika akar kosong
        Tree *baru = new Tree; //membuat node baru
        baru->data = d; //simpan data
        baru->left = NULL; //definiskan data kiri dengan null
        baru->right = NULL; //definiskan data kanan dengan null
        (*root) = baru; //definiskan akar dengan data baru
        (*root)->left = NULL; //definiskan daun kiri dengan null
        (*root)->right = NULL; //definiskan daun kanan dengan null
    }else if(d < (*root)->data){ //jika data baru kurang dari data akar
        add(&(*root)->left, d); //tambahkan data ke daun kiri
    }else if(d > (*root)->data){ //jika data baru lebih dari data akar
        add(&(*root)->right, d); //tambahkan data ke daun kanan
    }else if(d == (*root)->data){ //jika data baru samadengan data akar
        cout << "data sudah ada"; //tampilkan data sudah ada
    }
}

void preOrder(Tree *root){ //fungsi preorder
    if(root != NULL){ //jika data akar tidak null
        cout << root->data << " "; //tampilkan data akar
        preOrder(root->left); //tampilkan data daun kiri
        preOrder(root->right); //tampilkan data daun kanan
    }
}

void inOrder(Tree *root){ //fungsin inorder
    if(root != NULL){ //jika data akar tidak null
        inOrder(root->left); //tampilkan data daun kiri
        cout << root->data << " "; //tampilkan data akar
        inOrder(root->right); //tampilkan data daun kanan
    }
}

void postOrder(Tree *root){ //fungsi postOrder
    if(root != NULL){ //jika data akar tidak null
        postOrder(root->left); //tampilkan data daun kiri
        postOrder(root->right); //tampilkan data daun kanan
        cout << root->data << " "; //tampilkan data akar
    }
}

int cari(Tree *root, int data){ //ufungsi cari
    if(root == NULL){ //jika data akar null
        return 0; //kembalikan nilai nol
    }else if(data < root->data){ //jika data cari kurang dari data akar
        return (cari(root->left, data)); //cari data di kiri
    }else if (data > root->data){ //jika data cari lebih dari data akar
        return (cari(root->right, data)); //cari data di kanan
    }else if(data == root->data){ //jika data cari samadengan data akar
        return 1; //kembalikan nilai satu
    }
}

void cek(Tree *root, int data){ //fungsi cek
    if(cari(root, data) == 1){ //jika hasil cari samadengan satu
        cout << "\ndata "<<data<<" ditemukan"; //tampilkan data
    }else{ //jika tidak
        cout << "\ndata "<<data<<" tidak ditemukan"; //tampilkan data tidak ditemukan
    }
}

int count(Tree *root){ //fungsi count
    if(root == NULL){ //jika data akar null
        return 0; //kebalikan nilai nol
    }else{ //jika tidak
        return 1 + count(root->left) + count(root->right); //kembalikan nilai hasil jumlah
    }
}

int height(Tree *root){ //fungsi height
    if(root == NULL){ //jika data akar null
        return 0; //kembalikan nilai -1
    }else{ //jika tidak
        int h1 = height(root->left); //deklarasi h1 dengan data kiri
        int h2 = height(root->right); //deklarasi h2 dengan data kanan

        if(h1 > h2){ //jika data kiri lebih dari data kakan
            return h1 + 1; //tampilkan tinggi kiri + 1
        }else{ //jika tidak
            return h2 + 1; //tampilkan tinggi kanan + 1
        }
    }
}

void leaf(Tree *root){ //fungsi leaf
    if(root == NULL){ //jika data akar kosong
        cout << "Tree Kosong"; //tampilkan data kosong 
    }
    if(root->left != NULL){ //jika daun kiri tidak null
        leaf(root->left); //panggil daun kiri
    }
    if(root->right != NULL){ //jika daun kanan tidak null
        leaf(root->right); //panggil daun kanan
    }
    if(root->left == NULL && root->right == NULL){ //jika daun kiri dan kanan kosong
        cout << root->data << " "; //tampilkkan data akar
    }
}