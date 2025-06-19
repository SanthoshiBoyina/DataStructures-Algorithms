#include <bits/stdc++.h>
using namespace std;

string compressString(string str) {
    string res = "";
    char ch = str[0];
    int i=0, count = 0;

    while(i < str.length()) {
        if(str[i] == ch) {
            count++;
        }
        else {
            res += ch;
            res += to_string(count);
            count = 1;
            ch = str[i];
        }
        i++;
    }
    res += ch;
    res += to_string(count);
    return res;
}

int main() {
    string str;
    cin >> str;
    cout << compressString(str);  
    return 0;
}