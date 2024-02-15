//
// Created by Harshit Singla on 15-02-2024.
//


#include <bits/stdc++.h>

using namespace std;

void helper(int row, int col, vector<vector<int>> &arr, vector<string> &ans, string path) {

    if (row >= arr.size() || col >= arr.size() || row < 0 || col < 0) {
        return;
    }

    if (row == arr.size()-1 && col == arr.size()-1) {
        ans.push_back(path);
        return;
    }

    arr[row][col] = -1;
    /* Up */
    if (row-1 >= 0 && arr[row-1][col]==1) {
        helper(row-1, col, arr, ans, path+'U');
    }

    /* Down */
    if (row+1 < arr.size() && arr[row+1][col]==1) {
        helper(row+1, col, arr, ans, path+'D');
    }

    /* Left */
    if (col-1>=0 && arr[row][col-1]==1) {
        helper(row, col-1, arr, ans, path+'L');
    }

    /* Right */
    if (col+1 < arr.size() && arr[row][col+1]==1) {
        helper(row, col+1, arr, ans, path+'R');
    }

    arr[row][col] = 1;
}

vector<string> findPath(vector<vector<int>> & arr) {
    vector<string> ans;
    helper(0,0,arr, ans, "");
    return ans;
}

int main() {

    vector<vector<int>> arr = {{0, 1, 1, 1},{ 1, 1, 1, 0 },{1, 0, 1, 1},{ 0, 0, 1, 1}};
    vector<string> result = findPath(arr);
    for (const string& i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
