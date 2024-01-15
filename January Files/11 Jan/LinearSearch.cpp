//
// Created by DELL on 11/01/2024.
//


#include <bits/stdc++.h>

using namespace std;

int linearSearch(const int arr[], int size, int target) {
    for (int i=0; i<size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {

    int arr[] = {3,5,2,1,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << linearSearch(arr, size, 2) << endl;
    cout << linearSearch(arr, size, 0) << endl;
    return 0;

}