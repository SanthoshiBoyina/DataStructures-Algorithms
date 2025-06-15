#include <bits/stdc++.h>
using namespace std;

void hollowRectangle(int n, int m) {
    for(int j=0; j<m; j++) {
        cout << "*";
    }
    cout << "\n";
    for(int i=1; i<n-1; i++) {
        for(int j=0; j<m; j++) {
            if(j == 0 || j == m-1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }

     for(int j=0; j<m; j++) {
        cout << "*";
    }
}

int main() {
    int width, length;
    cin >> width >> length;

    hollowRectangle(length, width);  
    return 0;
}