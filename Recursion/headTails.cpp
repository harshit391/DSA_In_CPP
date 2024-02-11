//
// Created by Harshit Singla on 06-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void headOrTailes(int n, string s){

    if (n == 0) {
        cout << s << endl;
        return;
    }

    headOrTailes(n-1, s+"H ");
    headOrTailes(n-1, s+"T ");
}

int main() {
    vector<string> ans;
    headOrTailes(3,"");
    return 0;
}
