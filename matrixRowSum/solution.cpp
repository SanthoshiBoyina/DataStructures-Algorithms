#include<bits/stdc++.h>
using namespace std;

void matrixRowSum(vector<vector<int>> &mat, int n, int m) {
    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=0; j<m; j++) {
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

    matrixRowSum(mat, n, m);
    return 0;
}