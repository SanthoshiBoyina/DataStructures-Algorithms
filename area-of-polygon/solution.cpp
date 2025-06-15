#include <bits/stdc++.h>
using namespace std;

int areaOfPolygon(vector<vector<int>> &mat, int n, int m) {
    int leftSum = 0, rightSum = 0;
    for(int i=1; i<n; i++) {
        leftSum += mat[i-1][0] * mat[i][1];
        rightSum += mat[i-1][1] * mat[i][0];
    }
    leftSum += mat[n-1][0] * mat[0][1];
    rightSum += mat[n-1][1] * mat[0][0];
    return abs(leftSum - rightSum);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat (n, vector<int> (2));
    for(int i=0; i<n; i++) {
        for(int j=0; j<2; j++) {
            cin >> mat[i][j];
        }
    }

    cout << areaOfPolygon(mat, n, 2);
    return 0;
}