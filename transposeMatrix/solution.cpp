#include<bits/stdc++.h>
using namespace std;

void transposeMatrix(vector<vector<int>> &mat, int n, int m) {
    for(int j=0; j<m; j++) {
        for(int i=0; i<n; i++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
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

    transposeMatrix(mat, n, m);
    return 0;
}