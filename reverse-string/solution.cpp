#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    int p1 = 0, p2 = s.length()-1;
    while(p1 < p2) {
        char temp = s[p1];
        s[p1] = s[p2];
        s[p2] = temp;
        p1++;
        p2--;
    }
    return s;
}

int main() {
    string s;
    cin >> s;

    cout << reverseString(s);
    return 0;
}