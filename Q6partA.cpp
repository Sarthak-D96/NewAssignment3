//
// Created by Sarthak Duvedi on 18/08/25.
// implementing sparse matrix, with transpose

#include<iostream>
using namespace std;


int main() {

    int n; // no of non zero elements
    cout << "enter no of elements to enter";
    cin >> n;

    int x, y;

    cout << "enter number of rows and columns respectively:";
    cin >> x >> y;

    int a [n][3];

    // taking input of elements;
    cout << "enter coordinates of the rows and column numbers, and values";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
        cout << endl;
    }

    // taking transpose of matrix
    int j = 0;
    int temp = 0;

    for (int i = 0; i < n; i++) {
        temp = a[i][j];
        a[i][j] = a[i][j + 1];
        a[i][j + 1] = temp;
    }

    return 0;
}