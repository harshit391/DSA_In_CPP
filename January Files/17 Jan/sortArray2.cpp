//
// Created by Harshit Singla on 17-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

string sortIt(char str[]) {

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    for (int i=0; i<strlen(str); i++) {
        if (str[i]>='A' && str[i]<='Z') {
            freq1[str[i]-'A']++;
        } else {
            freq2[str[i]-'a']++;
        }
    }

    char ans[strlen(str)+1];
    int idx=0;

    for (int i=0; i<26; i++) {
        while (freq1[i]>0) {
            ans[idx++] = char(i+65);
            freq1[i]--;
        } while (freq2[i]>0) {
            ans[idx++] = char(i+97);
            freq2[i]--;
        }
    }

    ans[idx] = '\0';

    return ans;

}

int main() {

    char str[] = "MmyNameisHarshit";

    cout << sortIt(str);
}