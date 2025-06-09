# Study Cases
## 1. Median Sebuah Array
Problem:
> Anda diminta membuat sebuah program C++ untuk menghitung nilai median dari sekumpulan bilangan bulat.  
Data bilangan tersebut sudah tersedia dan disimpan dalam array berdimensi satu. Untuk menentukan nilai median, Anda harus terlebih dahulu mengurutkan array tersebut dari nilai terkecil ke terbesar. 
Namun, pengurutan harus dilakukan menggunakan rekursi, bukan perulangan biasa. Gunakan metode bubble sort rekursif.
>
> Setelah array terurut, program harus menghitung dan menampilkan nilai median:
> - Jika jumlah data ganjil, median adalah nilai di tengah.
> - Jika jumlah data genap, median adalah rata-rata dari dua nilai tengah.
>
> Ketentuan:
> - Gunakan array dengan 7 elemen integer.
> - Tampilkan hasil median di layar.

Sourcecode:
```c++
#include <iostream>
using namespace std;
// inisialisasi ukuran array
int arr[7];

// recursive bubblesort
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

// output array yang sudah diurutkan
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
    cout << "Median: " << arr[3]; // karena array sudah di urutkan, cukup output arr[3] utk median
}
```
Contoh input/output (Expected):
> array = {12, 45, 23, 8, 34, 67, 5}
> 
> Data setelah diurutkan: 5 8 12 23 34 45 67
> Median: 23

Contoh input/output (Reality):
```
Masukkan deret 7 buah angka: 12 45 23 8 34 67 5      
Data setelah diurutkan: {5, 8, 12, 23, 34, 45, 67}
Median: 23
```

## 2. Deteksi Duplikat dalam Sebuah Array
Problem:
> Buatlah program C++ yang dapat mendeteksi apakah ada nilai yang sama (duplikat) dalam sebuah array integer.  
Program akan membandingkan setiap elemen dengan elemen-elemen setelahnya untuk mencari pasangan nilai yang sama.  
Bila ditemukan, tampilkan nilai tersebut sebagai duplikat.
> 
> Ketentuan:
> - Gunakan array dengan 8 elemen integer.
> -  Gunakan nested loop (perulangan bersarang) untuk membandingkan elemen.
> -  Program boleh mencetak nilai duplikat lebih dari sekali jika ditemukan di lebih dari satu posisi.

Sourcecode:
```c++
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
                // menambahkan arr[j] ke dup jika sama
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
```

Contoh input/output (Expected):
> array = {3, 5, 7, 3, 9, 5, 1, 4}
> 
> Duplikat ditemukan: 3  
Duplikat ditemukan: 5

Contoh input/output (Reality):
```
Masukkan 8 buah angka: 3 5 7 3 9 5 1 4  
Duplikat ditemukan: 3  
Duplikat ditemukan: 5
```
## 3. Frekuensi Muncul Angka
Problem
> Buatlah program C++ untuk menghitung berapa kali setiap angka muncul dalam sebuah array integer.  
Data angka yang tersedia hanya berada dalam rentang 1 sampai 4.  
Anda harus menggunakan array tambahan untuk menyimpan dan menghitung frekuensi kemunculan tiap angka tersebut.
>  
> Ketentuan:
> - Gunakan array utama dengan 10 elemen yang hanya berisi angka dari 1 hingga 4.
> - Gunakan array kedua sebagai penghitung (counter) frekuensi.
> - Cetak hasil berupa jumlah kemunculan masing-masing angka dari 1 sampai 4.

Sourcecode:
```c++
#include <iostream>
#include <vector>
using namespace std;


int main(){
    cout << "Masukkan beberapa angka(input 'f' untuk mengakhiri): ";
    vector<int> vec;
    int counter[5] = {0, 0, 0, 0, 0};
    int input;
    while(cin >> input){
        vec.push_back(input);
    }
    
    for(int i = 0; i < vec.size(); ++i){
        if(vec[i] == 1){
            counter[1]++;
        }
        else if(vec[i] == 2){
            counter[2]++;
        }
        else if(vec[i] == 3){
            counter[3]++;
        }
        else if(vec[i] == 4){
            counter[4]++;
        }
        else{
            continue;
        }
    }

    cout << "1: " << counter[1] << "x\n";
    cout << "2: " << counter[2] << "x\n";
    cout << "3: " << counter[3] << "x\n";
    cout << "4: " << counter[4] << "x\n";

}
```

Contoh input/output (Expected):
> array : {1, 3, 2, 1, 3, 4, 2, 1, 3, 4}
> 
> 1: 3x  
> 2: 2x  
> 3: 3x  
> 4: 2x


