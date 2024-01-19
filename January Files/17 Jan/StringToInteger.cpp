//
// Created by Harshit Singla on 17-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

int convertIt(char ch[]) {
    int n = strlen(ch);

    int toAdd = 1;

    int num = 0;

    for (int i=n-1; i>=0; i--) {
        num += (ch[i]-'0')*toAdd;
        toAdd*=10;
    }

    return num;
}

int main() {

    cout << convertIt("21345");

    return 0;
}
