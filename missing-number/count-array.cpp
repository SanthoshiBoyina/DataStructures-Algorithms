#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> count (101);
    for(int i=1; i<=99; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    for(int i=1; i<=100; i++) {
        if(count[i] == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}