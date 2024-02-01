//
// Created by Harshit Singla on 01-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void setBit(int n, int k) {
    cout << (n | (1 << k)) << endl;
}

int main() {

    int n,k;
    cin >> n >> k;

    setBit(n,k);

    return 0;
}
