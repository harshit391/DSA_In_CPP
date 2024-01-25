//
// Created by Harshit Singla on 22-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

void selection(int arr[], int n) {

    for (int i=0; i<n; i++) {
        int min = i;
        for (int j=i+1; j<n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main() {
    int arr[] = {6,3,2,9,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before Sorting :- " << endl;
    for (int i : arr) {
        cout << i << " ";
    }


    cout << endl << endl;

    selection(arr,n);

    cout << "After Sorting :- " << endl;
    for (int i : arr) {
        cout << i << " ";
    }
}