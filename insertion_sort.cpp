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
    int temp;
    int j;

    for (int i = 0; i < n; i++){
        temp = arr[i];
        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "\nstep" << i << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
    }

}

void display(){
    cout << endl;
    cout << "\n===============";
    cout << "\nElement Array" << endl;
    cout << "\n===============";

    for(int j = 0; j < n; j++){
        cout << arr[j] << endl;
    }
    cout << endl;
}

int main(){
    input();
    insersitonsort();
    display();
    system("pause");
}