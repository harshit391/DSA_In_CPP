//
// Created by Harshit Singla on 12/01/2024.
//

#include <bits/stdc++.h>

using namespace std;

int findIt(const int arr[], int size, int target) {

    int start = 0;
    int end = size-1;

    while (start <= end) {
        int mid = start + (end-start)/2;

        if (target > arr[start] && target > arr[mid]) { // NOLINT(*-branch-clone)
            start = mid+1;
        }

        else if (target < arr[start]) {
            start = mid+1;
        }

        else if (target == arr[mid]) {
            return mid;
        }

        else {
            end = mid-1;
        }
    }

    return -1;
}

int main() {

    int arr[] = {7,8,9,10,11,12,1,2,3,4,5};
    int size = 11;
    int target = 6;

    cout << findIt(arr, size, target);
}