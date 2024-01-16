//
// Created by Harshit Singla on 15/01/2024.
//

#include <bits/stdc++.h>

using namespace std;

int findIt(vector<int>& arr) {

    int n = (int)arr.size();

    for (int i=0; i<arr.size(); i++) {
        while (arr[i] > 0 && arr[i]!=arr[arr[i]-1] && arr[i] < n) {
            swap(arr[i], arr[arr[i]-1]);
        }
    }

    for (int i=0; i<n; i++) {
        if (arr[i]!=i+1) {
            return i+1;
        }
    }

    return n;

}


int main() {

    vector<int> arr = {10,1,-5,4,2,6,-2,5};

    cout << findIt(arr);

    return 0;
}
