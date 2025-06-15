#include <bits/stdc++.h>
using namespace std;

void halfDiamond(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    n--;
    for(int i=0; i<n; i++) {
        for(int j=0; j<(n-i); j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    halfDiamond(n);  
    return 0;
}