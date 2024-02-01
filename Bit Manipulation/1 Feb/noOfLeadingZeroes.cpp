//
// Created by Harshit Singla on 01-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int position = 0;

    while (n) {
        position++;
        n = n >> 1;
    }

    cout << 32-n << endl;

    return 0;
}
