//
// Created by Harshit Singla on 22-01-2024.
//


#include <bits/stdc++.h>

using namespace std;

void insertion(int arr[], int n) {

    for (int i=1; i<n; i++) {
        int j= i-1;
        int curr = arr[i];
        while (j >= 0 && curr < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
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

    insertion(arr,n);

    cout << "After Sorting :- " << endl;
    for (int i : arr) {
        cout << i << " ";
    }
}