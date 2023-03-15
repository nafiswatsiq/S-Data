#include "Tree.cpp"

main(){
    root=NULL; //definisikan root dengan null
    //tambah data
    add(&root,56);
    add(&root,50);
    add(&root,78);
    add(&root,53);
    add(&root,31);
    add(&root,60);
    add(&root,99);
    //tampilkan data
    cout<<"\nPreorder : ";preOrder(root);
    cout<<"\nInorder : "; inOrder(root);
    cout<<"\nPostorder: "; postOrder(root);
    cout<<"\n";
    //cari data
    cek(root,51);
    cek(root,99);

    cout<<"\n\nJumlah Node "<<count(root); //tampilkan jumlah node
    cout<<"\n\nkedalaman level "<<height(root); //tampilkan tinggi/level
    cout<<"\n\nLeaf : "; leaf(root);//tampilkan leaf/daun
    getche();
}

