//
// Created by Sarthak Duvedi on 19/08/25.
// No of distinct elements

#include<iostream>
using namespace std;


int noOfUnique(int a[]) {
    const int n = 8; // size of the array
    int count = 0;
    int check = 0;

    for (int i = 0; i < n; i++) {
         check = 1;
        for (int j = 0; j < n; j++){
            if (a[i] == a[j] && i != j) {
                check = 0;
                break;
            }

        }
        if (check) {
            count++;
        }
    }
    return count;
}

int main() {

    int a [] = {1, 1, 2, 3, 1, 4, 1, 1};
    int x = noOfUnique(a);
    cout<<x<<endl;

    return 0;
}
