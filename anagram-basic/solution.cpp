#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b) {
    vector<int> count1 (26, 0);
    vector<int> count2 (26, 0);

    for(int i=0; i<a.length(); i++) {
        count1[a[i] - 'a']++;
    }
    for(int i=0; i<b.length(); i++) {
        count2[b[i] - 'a']++;
    }

    for(int i=0; i<26; i++) {
        if(count1[i] != count2[i])
            return false;
    }
    return true;
}

int main() {
    string a, b;
    cin >> a >> b;

    if(isAnagram(a, b)) 
        cout << "TRUE";
    else
        cout << "FALSE"; 
    return 0;
}