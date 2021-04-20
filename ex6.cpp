#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Введите n: ";
    cin >> n;
    float x[n],y[n];
    for(int i = 0; i < n; i++){
        cout << "Введите х: ";
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        cout << "Введите y: ";
        cin >> y[i];
    
    }
    for(int i = 0; i < n; i++){
        float temp = 0;
        if((x[i] < 0) && (y[i] < 0)){
            x[i] += 0.5;
            y[i] += 0.5;
        }
        else if((x[i] < 0) && (y[i] > 0)){
            x[i] *= x[i];
        }
        else if((x[i] > 0) && (y[i] < 0)){
            y[i] *= y[i];
        }
        else if((x[i] > 0) && (y[i] > 0)){
            temp = y[i];
            y[i] = (x[i]+y[i])/2;
            x[i] = (temp + x[i])/2;
        }
    }
    cout << "Результат а: " << endl;
    for(int i = 0; i < n; i++){
        cout << x[i] << " ";
    }
    cout << " " << endl;
    cout << "Результат б: " << endl;
    for(int i = 0; i < n; i++){
        cout << y[i] << " ";
    }
}