//
// Created by Harshit Singla on 22-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

void bubble(int arr[], int n) {

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {6,3,2,9,7,1,2};
    int n = sizeof(arr)/(int)sizeof(arr[0]);

    cout << "Before Sorting :- " << endl;
    for (int i : arr) {
        cout << i << " ";
    }


    cout << endl << endl;

    bubble(arr,n);

    cout << "After Sorting :- " << endl;
    for (int i : arr) {
        cout << i << " ";
    }
}
