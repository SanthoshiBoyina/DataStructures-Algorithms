#include<bits/stdc++.h>
using namespace std;

int lowerTriangularSum(vector<vector<int>> &mat, int n) {
    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            ans += mat[i][j];
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat (n, vector<int> (n, 0));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << lowerTriangularSum(mat, n);
    return 0;
}