#include <bits/stdc++.h>
using namespace std;

void palindromicPattern(int n) {
    char key = 'A';
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << char(key + j) << " ";
        }
        char x = 'A' + i -1;
        for(int k=0; k<i; k++) {
            cout << x-- << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n; 
    cin >> n;

    palindromicPattern(n);
    return 0;
}