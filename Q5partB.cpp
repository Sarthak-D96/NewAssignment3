//
// Created by Sarthak Duvedi on 20/08/25.
// Tri-diagonal matrix

#include<iostream>
using namespace std;

int n = 4;



void triDiagonal() {

    const int l = (n*n) - 6;

    int a [l];

    cout << "enter elements to store in the array";
    for (int i = 0; i < l; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(i - j) > 1) {
                cout << 0 <<" ";
            } else {
                cout << a[i] <<" ";
            }
        }
        cout << endl;
    }

}

int main() {

triDiagonal();

    return 0;
}