#include <bits/stdc++.h>
using namespace std;

void filledRectangle(int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    filledRectangle(n, m);  
    return 0;
}