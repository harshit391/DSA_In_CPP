//
// Created by Harshit Singla on 08-02-2024.
//

/* Sort an Array with respect to another array */

#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> arr = {1,2,2,5,5,6,5,4,3,3,2,3,1,1,7,8,9,7,8};

    vector<int> along = {5,3,1,2,4,6,10};

    map<int, int> mp;
    for (int i : arr) {
        mp[i]++;
    }

    vector<int> ans;
    for (int i : along) {
        while (mp[i]>0) {
            ans.push_back(i);
            mp[i]--;
        }
        mp[i] = -1;
    }

    vector<int> sep;

    for (int i : arr) {
        if (mp[i]!=-1) {
            sep.push_back(i);
        }
    }

    sort(sep.begin(), sep.end());

    for (int i : sep) {
        ans.push_back(i);
    }

    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
