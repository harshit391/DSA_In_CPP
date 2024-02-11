//
// Created by Harshit Singla on 02-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> arr = {1,2,4,3,2,4,1,5,6,7,8,6,8,7};

    int x = 0;

    for (auto i : arr) {
        x ^= i;
    }

    int p = 0;

    while ((x&1) == 1) {
        p++;
        x = x >> 1;
    }

    int num1 = 0;
    int num2 = 0;

    for (auto i : arr) {
        if (((i >> p)&1)==1) {
            num1 ^= i;
        } else {
            num2 ^= i;
        }
    }



    return 0;
}
