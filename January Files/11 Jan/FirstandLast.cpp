//
// Created by DELL on 11/01/2024.
//


#include <bits/stdc++.h>

using namespace std;

int firstElement(const int arr[], int size, int target) {
    int start = 0;
    int end = size-1;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end-start)/2;

        if (arr[mid] == target) {
            ans = mid;
            end = mid-1;
        }

        else if (arr[mid] > target) {
            end = mid - 1;
        }

        else {
            start = mid +1;
        }
    }

    return ans;
}

int lastElement(const int arr[], int size, int target) {
    int start = 0;
    int end = size-1;
    int ans = 0;

    while(start <= end) {
        int mid = start + (end-start)/2;

        if (arr[mid] == target) {
            ans = mid;
            start = mid+1;
        }

        else if (arr[mid] > target) {
            start = mid + 1;
        }

        else {
            end = mid -1;
        }
    }

    return ans;
}

int main() {

    int arr[] = {1,2,2,3,3,3,5,6,6,6,8};

    int size = sizeof(arr)/sizeof(int);

    int target = 3;

    int first = firstElement(arr, size, target);
    int last = lastElement(arr, size, target);

    cout << "First Position :- " << first << " and Last Position :- " << last << endl;

    return 0;

}