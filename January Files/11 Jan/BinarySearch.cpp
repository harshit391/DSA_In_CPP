//
// Created by DELL on 11/01/2024.
//


#include <bits/stdc++.h>

using namespace std;

int binarySearch(const int arr[], int size, int target) {

    int start = 0;
    int end = size-1;

    while (start <= end) {
        int mid = start + (end-start)/2;

        if (arr[mid]==target) {
            return mid;
        }

        else if (arr[mid] > target) {
            end = mid -1;
        }

        else {
            start = mid+1;
        }
    }

    return -1;
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9};

    int size = sizeof(arr)/sizeof(int);

    cout << binarySearch(arr, size, 4) << endl;

    return 0;

}