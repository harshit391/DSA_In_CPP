//
// Created by Harshit Singla on 02-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[14] = {1,2,4,3,2,4,1,5,6,7,8,6,8,7};

    int x = arr[0];

    for (int i=1; i<14; i++) {
        x ^= arr[i];
    }

    cout << x << endl;

    return 0;
}
