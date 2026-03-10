#include <iostream>
using namespace std;

int arr[20];
int n;

void input (){
    while (true){
        cout << "masukan jumlah data pada array = ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArrat Tidak Boleh lebih dari 20\n";
        }
    }
    cout << endl;
    cout << "=============================================";
    cout << "==============masukan elementv array=========";
    cout << "=============================================";

    for (int i = 0; i < n; i++){
        cout << "data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

void insersitonsort(){

    
}