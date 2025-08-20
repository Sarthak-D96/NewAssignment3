//
// Created by Sarthak Duvedi on 18/08/25.
// count number of inversions

#include<iostream>

using namespace std;
int n = 0;

int numberOfInversion(int a []) {
     n = 10; // size of the array

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                count++;
            }
        }
    }

    return count;

}