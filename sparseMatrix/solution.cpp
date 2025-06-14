#include<bits/stdc++.h>
using namespace std;

bool isSparse(vector<vector<int>> &mat, int n, int m) {
    int zeroCount = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mat[i][j] == 0)
                zeroCount++;
        }
    }
    return zeroCount >= (n*m)/2;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat (n, vector<int> (m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> mat[i][j];
        }
    }

    if(isSparse(mat, n, m))
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}