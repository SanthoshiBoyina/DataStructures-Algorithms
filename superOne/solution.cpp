#include<bits/stdc++.h>
using namespace std;

bool isSuperOne(vector<vector<int>> &mat, int i, int j) {
    return (mat[i-1][j-1] == 0) && (mat[i-1][j] == 0) &&
     (mat[i-1][j+1] == 0) && (mat[i][j-1] == 0) && 
     (mat[i][j+1] == 0) && (mat[i+1][j-1] == 0) && 
     (mat[i+1][j] == 0) && (mat[i+1][j+1] == 0);
}

bool isSuperMatrix(vector<vector<int>> &mat, int n, int m) {
    for(int i=1; i<n-1; i++) {
        for(int j=1; j<m-1; j++) {
            if((mat[i][j] == 1) && isSuperOne(mat, i, j))
                return true;
        }
    }
    return false;
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

    if(isSuperMatrix(mat, n, m))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}