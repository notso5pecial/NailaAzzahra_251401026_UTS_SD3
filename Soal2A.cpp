#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;

    node(int isi){
        data= isi;
        next= nullptr;      
    }
};

node* head= nullptr;            
node* tail= nullptr;

void tambahBelakang(int isi){
    node* baru= new node(isi);
    if (head== nullptr){        
        head= baru;
        tail= baru;
    } else {
        tail->next= baru;       
        tail= baru;             
    }
}

void tampilkan(){
    node* temp= head;
    while (temp != nullptr){
        cout<< temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int main(){
int jumlahPeserta, dataInput;
    cout << "Berapa Jumlah Peserta : ";
    cin >> jumlahPeserta;
    for (int i = 0; i < jumlahPeserta; i++){
        cout << "Nomor peserta ke-" << i+1 << " (Masukkan secara berurutan dari terkecil) : ";
        cin >> dataInput;
        tambahBelakang(dataInput);
    }
    cout <<"Data awal: "; tampilkan();

    temp = head;  
    int dataTengah;
    cout << "Hapus node tengah yang berisi : ";
    cin >> dataTengah;

    while (temp->next->data != dataTengah){
        temp = temp->next;
    }

    node* hapus = temp->next;       
    temp->next = hapus->next;       
    delete hapus;                   
    cout << "Setelah node tengah dihapus: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}