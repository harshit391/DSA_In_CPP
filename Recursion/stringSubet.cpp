//
// Created by Harshit Singla on 09-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void display(string s, string up, int idx) {
    if (idx == s.size()) {
        cout << up << endl;
        return;
    }

    display(s, up, idx+1);
    display(s, up+s[idx], idx+1);
}

int main() {

    display("abc","",0);

    return 0;
}
