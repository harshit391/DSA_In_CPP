//
// Created by Harshit Singla on 18-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

pair<int, int> subArray(const int arr[], int target, int k) {
    pair<int, int> ans = {-1,-1};

    int n = 11;

    int start = 0;
    int end = 0;

    int sum = 0;

    while (end < n) {
        sum += arr[end];
        while (sum > target || (end-start+1) > k) {
            sum -= arr[start];
            start++;
        }
        if (sum == target) {
            ans.first = start;
            ans.second = end;
            break;
        }
        end++;
    }

    return ans;

}

int main() {
    int arr[] = {1,2,-1,3,4,9,5,2,3,1,4};

    pair<int, int> ans = subArray(arr, 20, 5);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}