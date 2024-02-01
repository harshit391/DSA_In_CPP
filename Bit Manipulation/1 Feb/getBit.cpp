//
// Created by Harshit Singla on 01-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void getBit(int n, int k) {
    if (n & (1 << k)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
}

int main() {

    int n,k;
    cin >> n >> k;

    getBit(n,k);

    return 0;
}
