#include<bits/stdc++.h>
using namespace std;

void zeroRowColumn(vector<vector<int>> &mat, int n, int m ,int rowNumber, int columnNumber) {
    for(int j=0; j<m; j++) {
        mat[rowNumber][j] = 0;
    }
    for(int i=0; i<n; i++) {
        mat[i][columnNumber] = 0;
    }
}

void resultant(vector<vector<int>> &mat, vector<vector<int>> &new_mat,int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mat[i][j] == 0) {
                zeroRowColumn(new_mat, n, m, i, j);
            }
        }
    }
}

void display(vector<vector<int>> &mat, int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
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
    vector<vector<int>> new_mat (mat);

    resultant(mat, new_mat, n, m);
    display(new_mat, n, m);
    return 0;
}