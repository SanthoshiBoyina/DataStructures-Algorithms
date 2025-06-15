#include <bits/stdc++.h>
using namespace std;

void floydPattern(int n) {
    int key = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << key++ << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    floydPattern(n);  
    return 0;
}