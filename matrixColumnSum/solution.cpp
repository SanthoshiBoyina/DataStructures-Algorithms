#include<bits/stdc++.h>
using namespace std;

void columnSum(vector<vector<int>> &mat, int n, int m) {
    for(int j=0; j<m; j++) {
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += mat[i][j];
        }
        cout << sum << "\n";
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat (n, vector<int> (m, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> mat[i][j];
        }
    }

    columnSum(mat, n, m);
    return 0;
}