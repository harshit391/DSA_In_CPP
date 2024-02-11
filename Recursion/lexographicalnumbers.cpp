//
// Created by Harshit Singla on 09-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void helper(int curr, int n) {
    if (curr > n) {
        return;
    }

    cout << curr << endl;

    for (int i=0; i<=9; i++) {
        helper(curr*10+i, n);
    }
}

int main() {

    int n;
    cin >> n;

    for (int i=1; i<=9; i++) {
        helper(i, n);
    }

    return 0;
}
