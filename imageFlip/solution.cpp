#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &ar, int n) {
    int p1 = 0, p2 = n-1;
    while(p1 < p2) {
        int temp = ar[p1];
        ar[p1] = ar[p2];
        ar[p2] = temp;
        p1++;
        p2--;
    }
}

void invertMatrix(vector<vector<int>> &mat, int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            mat[i][j] ^= 1;
        }
    }
}

void imageFilp(vector<vector<int>> &mat, int n, int m) {
    for(int i=0; i<n; i++) {
        reverseArray(mat[i], m);
    }
    invertMatrix(mat, n, m);
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

    imageFilp(mat, n, m);
    display(mat, n, m);
    return 0;
}