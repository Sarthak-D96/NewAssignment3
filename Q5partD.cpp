//
// Created by Sarthak Duvedi on 18/08/25.
//

#include<iostream>
using namespace std;


int main() {

    int n = 4; // no of rows in matrix

    int a [n *(n - 1) / 2];
    int b[n];

    cout << "enter elements to store in the array" << endl;

    for (int i = 0; i < n *(n - 1) / 2; i++) {
        cin >> a[i];
    }

    cout << "enter diagonal elements to add";

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout <<"Elements added successfully"<<endl;
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                cout << 0 << " ";

            }
            else if (i == j) {
                cout << b[i] << " ";
            }
            else {
                cout << a[k]<< " ";
                k++;
            }
        }
        cout << endl;
    }


    return 0;
}