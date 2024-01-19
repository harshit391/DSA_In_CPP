//
// Created by Harshit Singla on 17-01-2024.
//

#include <bits/stdc++.h>

using namespace std;

string convertIt(char ch1[], char ch2[]) {
    int resultLength = max(strlen(ch1),strlen(ch2));

    char newArr[resultLength+1];
    newArr[resultLength] = '\0';

    int i= strlen(ch1)-1;
    int j= strlen(ch2)-1;
    int k= resultLength-1;

    int carry = 0;

    while ( i>=0 && j>=0 ) {

        int num1 = ch1[i]-'0';
        int num2 = ch2[j]-'0';

        int sum = (num1+num2+carry)%10;
        carry = (num1+num2+carry)/10;

        newArr[k--] = char(sum+'0');

        i--;
        j--;
    }

    while ( i>=0) {

        int num1 = ch1[i] - '0';

        int sum = (num1+carry)%10;
        carry = (num1+carry)/10;

        newArr[k--] = char(sum+'0');

        i--;
    }

    while ( j>=0) {

        int num2 = ch2[j] - '0';

        int sum = (num2+carry)%10;
        carry = (num2+carry)/10;

        newArr[k--] = char(sum+'0');

        j--;
    }

    return newArr;
}

int main() {

    cout << convertIt("123","1234");

    return 0;
}