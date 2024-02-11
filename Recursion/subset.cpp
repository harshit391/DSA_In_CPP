//
// Created by Harshit Singla on 06-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void subset(vector<int> ans, int idx1, int idx2) {
    if (idx1 > ans.size() || idx2 > ans.size()) {
        return;
    }

    for (int i=idx1; i<idx2; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    subset(ans, idx1, idx2+1);
    subset(ans, idx1+1,idx2+1);
}

int main() {
    vector<int> arr = {1,2,3};
    subset(arr, 0, 0);
    return 0;
}
