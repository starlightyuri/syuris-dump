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