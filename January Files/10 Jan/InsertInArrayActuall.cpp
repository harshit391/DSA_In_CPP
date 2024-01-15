//
// Created by DELL on 10/01/2024.
//


#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int size) {
    int start = 0;
    int end = size-1;

    while (start < end) {
        swap(arr[start++], arr[end--]);
    }
}

void del(int arr[], int index, int &size) {

    if (index == size-1) {
        size--;
        return;
    }

    for (int i=index; i<size; i++) {
        arr[i] = arr[i+1];
    }

    size--;
}

void insert(int arr[], int index, int value, int &size) {
    for (int i=size; i>=index; i--) {
        arr[i] = arr[i-1];
    }

    arr[index] = value;
    size++;
}

int main() {

    int arr[] = {1,4,3,2,5,7,6,8,9};

    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;


    int n = 9;

    insert(arr, 5, 6, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    del(arr, 6, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    return 0;

}