#include <bits/stdc++.h>
using namespace std;

int localMax(vector<vector<int>> mat, int n, int m) {
    int ans = INT_MIN;
    for(int i=n-3; i<n; i++) {
        for(int j=m-3; j<m; j++) {
            ans = max(ans, mat[i][j]);
        }
    }
    return ans;
}

void solve(vector<vector<int>> &mat, int n) {
    for(int i=2; i<n; i++) {
        for(int j=2; j<n; j++) {
            cout << localMax(mat, i+1, j+1) << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat (n, vector<int> (n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }
    solve(mat, n);
    return 0;
}