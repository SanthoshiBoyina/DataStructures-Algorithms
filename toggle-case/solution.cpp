#include <bits/stdc++.h>
using namespace std;

string toggleCase(string str) {
    for(int i=0; i<str.length(); i++) {
        if('a' <= str[i] && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if('A' <= str[i] && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

int main() {
    string str;
    cin >> str;

    cout << toggleCase(str); 
    return 0;
}