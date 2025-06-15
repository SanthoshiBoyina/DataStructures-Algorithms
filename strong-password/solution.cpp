#include <bits/stdc++.h>
using namespace std;

int strongPassword(string str) {
    bool digit = false, lowerCase = false, upperCase = false, special = false;
    for(int i=0; i<str.length(); i++) {
        if ('0' <= str[i] && str[i] <= '9')
            digit = true;
        else if ('a' <= str[i] && str[i] <= 'z')
            lowerCase = true;
        else if('A' <= str[i] && str[i] <= 'Z')
            upperCase = true;
        else
            special = true;
    }
    int res = !digit + !lowerCase + !upperCase + !special;
    if(res + str.length() >= 6)
        return res;
    return 6 - str.length();
}

int main() {
    string str;
    cin >> str;

    cout << strongPassword(str);  
    return 0;
}