#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Введите n: ";
    cin >> n;
    float a[n];
    for(int i = 0; i < n; i++){
        cout << "Введите a: ";
        cin >> a[i];
    }
    float max = a[0];
    float min = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
        else if(a[i] < min){
            min = a[i];
        }
    }
    float temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    float count = min;
    for(int i = 0;count != max;){
        if(count == a[i]){
            i++;
        }
        else{
            cout << count << " ";
        }
        count++;
    }
}