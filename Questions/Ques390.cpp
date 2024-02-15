//
// Created by Harshit Singla on 12-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void display(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

int helper(vector<int> &arr, int n, int idx) {

    if (idx == 1) {
        return arr[0];
    }

    int idx2 = 0;
    if (n % 2 != 0) {
        for (int i=1; i<idx; i+=2) {
            arr[idx2++] = arr[i];
        }
    } else {
        for (int i=idx-2; i>=0; i-=2) {
            arr[idx2++] = arr[i];
        }
    }

    return helper(arr, n+1, idx2);
}

int lastRemaining(int n) {
    vector<int> arr(n,9);
    for (int i=1; i<=n; i++) {
        arr[i-1] = i;
    }

    return helper(arr, 1, arr.size());
}

int main() {

    cout << lastRemaining(4) << endl;

    return 0;
}
