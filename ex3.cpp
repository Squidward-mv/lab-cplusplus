#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Введите n: ";
    cin >> n;
    double z;
    for(int i = 0; i < n; i++){
        cout << "Введите y: ";
        cin >> z;
        if((z > 0) && (z < 10)){
            cout << "Результат: ";
            cout << z << endl;
        }
        else{
            cout << "Результат: 1" << endl;;
        }
    }
}