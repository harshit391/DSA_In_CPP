//
// Created by Harshit Singla on 09-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void helper(string s, string up, int k) {
    if (up.size() == k) {
        cout << up << endl;
        return;
    }

    for (int i=0; i<s.size(); i++) {
        helper(s, up+s[i], k);
    }
}

int main() {

    helper("abc", "", 3);
    return 0;
}
