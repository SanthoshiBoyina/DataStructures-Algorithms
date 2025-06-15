#include <bits/stdc++.h>
using namespace std;

string oddEvenIndex(string s) {
    string evenIndexStr = "", oddIndexStr = "";
    for(int i=0; i<s.length(); i++) {
        if(i%2 == 0)
            evenIndexStr += s[i];
        else 
            oddIndexStr += s[i];
    }
    return oddIndexStr + evenIndexStr;

}

int main() {
    string s;
    cin >> s;

    cout << oddEvenIndex(s);  
    return 0;
}