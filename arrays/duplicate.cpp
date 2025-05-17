#include <iostream>
#include <vector>
using namespace std;
int arr[8];
int main(){
    cout << "Masukkan 8 buah angka: ";
    for(int i = 0; i < 8; ++i){
        cin >> arr[i];
    }
    vector<int> dup;
    for(int i = 0; i < 8; ++i){
        for(int j = i + 1; j < 8; ++j){
            if(arr[j] == arr[i]){
                dup.push_back(arr[i]);
            }
        }
    }

    if(dup.size() == 0){
        cout << "Tidak ditemukan duplikat";
    }
    else{
        for(int i = 0; i < dup.size(); ++i){
            cout << "Duplikat ditemukan: " << dup[i] << endl;
        }
    }
}