//
// Created by Harshit Singla on 17-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

string sortIt(char str[]) {

    vector<int> freq(26, 0);

    for (int i=0; i<strlen(str); i++) {
        freq[str[i]-'a']++;
    }

    char ans[strlen(str)];
    int idx=0;

    for (int i=0; i<26; i++) {
        while (freq[i]>0) {
            ans[idx++] = char(i+97);
            freq[i]--;
        }
    }

    return ans;

}

int main() {

    char str[] = "mynameisharshit";

    cout << sortIt(str);
}