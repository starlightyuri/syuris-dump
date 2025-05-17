#include <iostream>
using namespace std;

int arr[7];
void bubble(int arr[7], int n){
    if (n == 1) return;
    int count = 0;
    for(int i = 0; i < n - 1; ++i){
        if(arr[i] > arr[i + 1]){
            swap(arr[i],arr[i + 1]);
            count++;
        }
    }
    if(count == 0) return;

    return bubble(arr, n - 1);
}

void printarr(int arr[7]){
    cout << "{";
    for(int i = 0; i < 7; ++i){
        if (i == 6){
            cout << arr[i] << "}";
        }
        else{
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
    return;
}

int main(){
    cout << "Masukkan deret 7 buah angka: ";
    for(int i = 0; i < 7; ++i){
        cin >> arr[i];
    }
    bubble(arr, 7);
    cout << "Data setelah diurutkan: ";
    printarr(arr);
    cout << "Median: " << arr[3];
}