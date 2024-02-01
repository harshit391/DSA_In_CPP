//
// Created by Harshit Singla on 31-01-2024.
//


#include <bits/stdc++.h>

using namespace std;

int findXor(int n) {

    if (n%4==0) {
        return n;
    }

    else if (n%4==1) {
        return 1;
    }

    else if (n%4==2) {
        return n+1;
    }

    else {
        return 0;
    }
}

int main() {

    int a = findXor(2-1);
    int b = findXor(24);

    cout << (a ^ b) << endl;

    int x = 0;
    for (int i=2; i<=24; i++) {
        x^=i;
    }

    cout << x << endl;


    return 0;
}
