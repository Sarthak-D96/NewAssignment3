// addition of two sparse matrix

#include<iostream>

using namespace std;

// taking a and b as normal matrices
// and then representing result as a sparse matrix

void addSparseMatrix() {

    const int n = 4;

    int a[4][4];
    int b[4][4];

    int result[4][4];

    for (int i = 0;i < n; i++) {
        for (int j = 0;j < n; j++) {
            result[i][j] = a[i][j] + b[i][j] ;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (result[i][j] != 0) {
                cout << i << " " << j << " " << result[i][j] << " ";
            }
        }
        cout << endl;
    }

}