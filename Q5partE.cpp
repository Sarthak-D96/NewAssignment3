//
// Created by Sarthak Duvedi on 20/08/25.
// implementing a symmetric matrix

#include<iostream>
using namespace std;


int n = 4;

void symmetricMatrix() {

    const int l = n *(n - 1) / 2;

    int a[l];
    int b[n];

    cout << "enter the elements for lower triangular matrix";

    for (int i = 0; i < l; i++) {
        cin >> a[i];
    }

    cout << "now add elements at diagonal";

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << b[i] << " ";
            } else if (i < j) {
                cout << a[k] << " ";
                k++;
            } else {
                cout << a[k] << " ";
                k++;
            }
        }
        cout << endl;
    }

}

int main() {


    symmetricMatrix();

    return 0;
}