//
// Created by DELL on 10/01/2024.
//

#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[] = {1,4,3,2,5,6,7,4};

    int n = sizeof(arr)/sizeof(int);

    arr[n] = 10;
    n++;

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
