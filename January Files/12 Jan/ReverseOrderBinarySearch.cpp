//
// Created by Harshit Singla on 12/01/2024.
//

#include <bits/stdc++.h>

using namespace std;

int reverseBinarySearch(const int arr[], int size, int target) {

    int start = size-1;
    int end = 0;

    while (end <= start) {

        int mid = end + (start-end)/2;

        if (arr[mid] == target) {
            return mid;
        }

        else if (arr[mid] > target) {
            end = mid-1;
        }

        else {
            start = mid+1;
        }
    }

    return -1;
}

int main() {

    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = 10;
    int target = 8;

    cout << reverseBinarySearch(arr, size, target);

}