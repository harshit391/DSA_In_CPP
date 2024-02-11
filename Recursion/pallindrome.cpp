//
// Created by Harshit Singla on 06-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

bool isPallindrome(string s) {
    if (s.size() < 2) {
        return true;
    }

    return s[0] == s[s.size()-1] && isPallindrome(s.substr(1,s.size()-2));
}

int main() {

    cout << isPallindrome("hello") << endl;
    cout << isPallindrome("deced") << endl;

    return 0;
}
