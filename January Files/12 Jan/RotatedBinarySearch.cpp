//
// Created by Harshit Singla on 12/01/2024.
//

#include <bits/stdc++.h>

using namespace std;

int rotatedBinarySearch(const int arr[], int size) {
    int start = 0;
    int end = size-1;

    while (start < end) {
        int mid = start + (end-start)/2;

        if (arr[mid] > arr[end] ) {
            start = mid+1;
        }

        else {
            end = mid;
        }
    }

    return start;
}

int main() {

    int arr[] = {7,8,9,10,11,12,13,0,1,2,3,4,5,6};
    int size = 14;

    cout << rotatedBinarySearch(arr, size) << endl;
}