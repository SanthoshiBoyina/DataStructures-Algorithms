#include <bits/stdc++.h>
using namespace std;

void floydPattern(int n) {
    for(int i=0; i<n; i++) {
        int key = i+1;
        for(int j=0; j<=i; j++) {
            if(j == 0) {
                cout << key << " ";
            }
            else {
                key = key + (n-j);
                cout << key << " ";
            }
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