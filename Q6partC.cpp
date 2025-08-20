//
// Created by Sarthak Duvedi on 20/08/25.
// Multiplication of sparse matrix

#include<iostream>
using namespace std;


void sparseMultiplication() {

    int n = 4;

    int a[4][4];
    int b[4][4];

    int result[4][4];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (result[i][j] != 0) {
                cout << i << " " << j << " " << result[i][j] << " ";
            }
        }
    }

}