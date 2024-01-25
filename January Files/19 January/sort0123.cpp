//
// Created by Harshit Singla on 19-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

void sortIt(int arr[], int size) {

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i=0; i<size; i++) {
        if (arr[i]==0) {
            count0++;
        } else if (arr[i]==1) {
            count1++;
        } else {
            count2++;
        }
    }

    int idx = 0;

    while (count0--) {
        arr[idx++] = 0;
    }
    while (count1--) {
        arr[idx++] = 1;
    }
    while (count2--) {
        arr[idx++] = 2;
    }

    for (int i=0; i<size; i++) {
        cout << arr[i]<< " ";
    }

}

int main() {

    int arr[] = {2,0,2,1,1,0};

    sortIt(arr,6);
}
