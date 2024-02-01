//
// Created by Harshit Singla on 25-01-2024.
//


#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSumBrute(vector<int>& nums){

    set<vector<int>> ans;

    for (int i=0; i<nums.size(); i++) {
        for (int j=i+1; j<nums.size(); j++) {
            for (int k=j+1; k<nums.size(); k++) {
                if (nums[i]+nums[j]+nums[k]==0) {
                    vector<int> curr = {nums[i],nums[j],nums[k]};
                    ans.insert(curr);
                }
            }
        }
    }

    vector<vector<int>> result;
    for (const auto& i : ans) {
        result.push_back(i);
    }

    return result;
}

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    set<vector<int>> ans;

    for (int i=0; i<nums.size(); i++) {
        int left = i+1;
        int right = (int)nums.size()-1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                vector<int> curr = {nums[i],nums[left],nums[right]};
                ans.insert(curr);
                left++;
                right--;
            }

            else if (sum > 0) {
                right--;
            }

            else {
                left++;
            }
        }
    }

    vector<vector<int>> result;
    for (const auto& i : ans) {
        result.push_back(i);
    }

    return result;
}

void printVec(const vector<vector<int>>& vec) {
    for (const auto& i : vec) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    vector<int> nums1 = {-1,0,1,2,-1,-4};
    vector<int> nums2 = {0,1,1};
    vector<int> nums3 = {0,0,0};

    printVec(threeSumBrute(nums1));
    printVec(threeSumBrute(nums2));
    printVec(threeSumBrute(nums3));

    printVec(threeSum(nums1));
    printVec(threeSum(nums2));`
    printVec(threeSum(nums3));

    return 0;
}
