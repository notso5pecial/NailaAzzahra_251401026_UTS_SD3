#include <iostream>
using namespace std;

int main(){
    int data[4][5];

    cout << "masukkan nilai: " << endl;
     for(int i=0; i<4; i++){
        for (int j=0; j<5; j++){
            cout << i << "," << j << ". ";
            cin >> nilai[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for (int j=0; j<5; j++){
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }
}