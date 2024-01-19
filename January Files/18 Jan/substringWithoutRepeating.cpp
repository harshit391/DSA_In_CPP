//
// Created by Harshit Singla on 18-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

void substringNoRepeat(char arr[]) {

    int start = 0;
    int end = 1;

    int maxWin = 1;

    int n = sizeof(arr)/sizeof(arr[0]);

    while (end < n) {
        if (arr[end] == arr[start]) {
            start++;
        }
        maxWin = max(maxWin, end-start+1);
        end++;
    }

    cout << maxWin;
}


int main() {
    char arr[] = "abcbdca";

    substringNoRepeat(arr);
}