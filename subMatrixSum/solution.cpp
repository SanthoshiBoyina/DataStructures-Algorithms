#include<bits/stdc++.h>
using namespace std;

int subMatrixSum(vector<vector<int>> &mat, int i, int j, int k, int l) {
    int ans = 0;
    for(int a = i; a <= k; a++) {
        for(int b = j; b <= l; b++) {
            ans += mat[a][b];
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int i, j, k, l;
    cin >> i >> j >> k >> l;
    vector<vector<int>> mat (n, vector<int> (n, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << subMatrixSum(mat, i, j, k, l);
    return 0;
}