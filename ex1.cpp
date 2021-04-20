#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Введите n: ";
    cin >> n;
    double result = 1;
    double a;
    for(int i = 0; i < n; i++){
        cout << "Введите а: ";
        cin >> a;
        result *= (a * pow(-1,i+2));
        cout << result << endl;
    }
}