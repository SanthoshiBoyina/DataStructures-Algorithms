#include <bits/stdc++.h>
using namespace std;

bool isRotatedString(string str1, string str2, int n) {
    for(int k=0; k<n; k++) {
        int temp = str1[n-1];
        for(int i=n-2; i>=0; i--) {
            str1[i+1] = str1[i];
        }
        str1[0] = temp;

        if(str1 == str2)
            return true; 
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;

    if(isRotatedString(str1, str2, n))
        cout << "yes";
    else
        cout << "no";
    return 0;
}