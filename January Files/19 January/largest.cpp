//
// Created by Harshit Singla on 19-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

int largest(int arr[], int size) {

    int start = 0;
    int end = size-1;

    int max = INT_MIN;

    while (start <= end) {
        int area = (end-start-1)*arr[start];
        if (area >= max) {
            max = area;
        }
        if (arr[end] == arr[start]) {

            end--;
            start++;
        }
        else if (arr[start] > arr[end]) {
            end--;
        }
        else {
            start++;
        }
    }

    return max;
}

int main() {
    int arr[] = {4,3,2,4,6,3,1,7,4,2};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout << largest(arr,size);
}

