//
// Created by Harshit Singla on 01-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int k) {

    return n & (1 >> k);
}

int main() {

    int n;
    cin >> n;
    int one = 0;

    while (n) {
        if ((n & 1) == 1) {
            one++;
        }
        n = n >> 1;
    }

    cout << one << endl;

    return 0;
}
