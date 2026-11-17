#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
};

void tambah(Node*& root, int data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->kiri = NULL;
        root->kanan = NULL;
    } else {
        if (data < root->data) {
            tambah(root->kiri, data);
        } else if (data > root->data) {
            tambah(root->kanan, data);
        }
    }
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

int main() {
    Node* root = NULL;
    int angka;

    cout << "Masukkan angka (0 = stop) : ";
    cin >> angka;

    while (angka != 0) {
        tambah(root, angka);
        cin >> angka;
    }

    cout << "Data secara In Order   : ";
    inOrder(root);
    cout << endl;

    return 0;
}