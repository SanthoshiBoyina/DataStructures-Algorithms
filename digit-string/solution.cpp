#include <bits/stdc++.h>
using namespace std;

bool isDigitString(string str) {
    for(int i=0; i<str.length(); i++) {
        if(!('0' <= str[i] && str[i] <= '9')) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;

    if(isDigitString(str))
        cout << "Yes";
    else
        cout << "No"; 
    return 0;
}