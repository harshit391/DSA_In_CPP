//
// Created by Harshit Singla on 15/01/2024.
//

#include <bits/stdc++.h>

using namespace std;

int searchIt(const int arr[], int size) {

    int start = 0;
    int end = size-1;
    int ans = -1;

    while (start <= end) {
        int mid = start+(end-start)/2;

        if (arr[mid]%2==0 && (arr[end]%2==0 || arr[start]%2!=0)) {
            ans = mid;
            end = mid-1;
        }

        else {
            start = mid+1;
        }
    }

    return ans;

}

int main() {
    int arr[] = {1,3,5,9,11,13,2,8,10,16};

    cout << searchIt(arr,sizeof(arr)/sizeof(arr[0])) << endl;
}