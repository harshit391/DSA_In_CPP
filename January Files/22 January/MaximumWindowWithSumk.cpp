//
// Created by Harshit Singla on 22-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {2,3,2,1,1,1,4,1,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 5;

    int start = 0;
    int end = 0;

    int sum = 0;

    int newStart = 0;
    int newEnd = 0;

    while (end < n) {
        sum += arr[end];
        if (sum == k) {
            if (newEnd-newStart+1 < end-start+1) {
                newEnd = end;
                newStart = start;
            }
        }

        while (sum > k) {
            sum -= arr[start];
            start++;
        }
        end++;
    }

    cout << "Two Indices we are getting sum equal to k :- " << newStart << " " << newEnd << endl;
    cout << "Maximum Size we get :- " << newEnd-newStart+1 << endl;

    return 0;
}
