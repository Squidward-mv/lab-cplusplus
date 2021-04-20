#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Введите n: ";
    cin >> n;
    int k = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        cout << "Введите a: ";
        cin >> a[i];
    }
    for(int i = 1; i < n-1; i++){
        if(a[i] > ((a[i-1] + a[i+2])/2)){
            k += 1;
        }
    }
    cout << "Кол-во членов: ";
    cout << k;
}