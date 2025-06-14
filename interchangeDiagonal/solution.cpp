#include<bits/stdc++.h>
using namespace std;

void interchangeDiagonals(vector<vector<int>> &mat, int n) {
    for(int i=0; i<n; i++) {
        int temp = mat[i][i];
        mat[i][i] = mat[i][n-i-1];
        mat[i][n-i-1] = temp;
    }
}

void displayMatrix(vector<vector<int>> &mat, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << mat[i][j] << " ";
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

    interchangeDiagonals(mat, n);
    displayMatrix(mat, n);
    return 0;
}