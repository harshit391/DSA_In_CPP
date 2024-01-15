//
// Created by Harshit Singla on 15/01/2024.
//

#include <bits/stdc++.h>

using namespace std;

int binary(vector<int> arr, int target, int start) {
    int end = (int)arr.size()-1;

    while (start <= end) {
        int mid = start + (end-start)/2;

        if (arr[mid]==target) {
            return mid;
        }
        else if (arr[mid]>target) {
            end = mid-1;
        }
        else {
            start = mid + 1;
        }
    }

    return -1;
}

pair<int,int> findIt(vector<int> arr, int target) {

    pair<int, int> ans = {-1,-1};

    for (int i=0; i<arr.size()-1; i++) {
        int index2 = binary(arr, target+arr[i],i+1);
        if (index2 != -1) {
            ans.first = i;
            ans.second = index2;
            break;
        }
    }

    return ans;

}

int main() {
    vector<int> arr = {1,3,5,6,8,9,11,13,19,21};

    pair<int, int> result = findIt(arr,8);

    cout << result.first << " " << result.second << endl;
}