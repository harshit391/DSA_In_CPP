//
// Created by Harshit Singla on 01-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    int zeroes = 0;

    while (n) {
        if ((n & 1) == 0) {
            zeroes++;
        }
        n = n >> 1;
    }

    cout << zeroes << endl;


    return 0;
}
