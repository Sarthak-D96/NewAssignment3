//
// Created by Sarthak Duvedi on 17/08/25.
// 2d array implementation


// diagonal matrix
#include<iostream>
using namespace std;



int main() {

// implementing for diagonal matrix
    int n = 4; // rows in the matrix

    int a [n];
    cout << "enter the diagonal elements"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout <<"Elements added successfully"<< endl;

    // displaying the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                cout << a[i] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}