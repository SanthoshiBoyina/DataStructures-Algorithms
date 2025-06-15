#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &mat) {
    for(int i=0; i<mat.size(); i++) {
        for(int j=0; j<mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
void pascalTriangle(vector<vector<int>> &mat, int n) {
    vector<int> temp;
    temp.push_back(1);
    mat.push_back(temp);
    for(int i=1; i<n; i++) {
        vector<int> temp;
        temp.push_back(1);
        for(int j=1; j<i; j++) {
            temp.push_back(mat[i-1][j-1] + mat[i-1][j]);
        }
        temp.push_back(1);
        mat.push_back(temp);

    }

}


int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat;

    pascalTriangle(mat, n);  
    display(mat);
    return 0;
}