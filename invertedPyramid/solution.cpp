#include <bits/stdc++.h>
using namespace std;

void invertedPyramid(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<(n-i); j++) {
            if(i == 0 || i == n-1)
                cout << "* ";
            else {
                if(j == 0 || j == n-i-1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    invertedPyramid(n);  
    return 0;
}