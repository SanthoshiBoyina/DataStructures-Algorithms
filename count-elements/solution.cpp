#include<bits/stdc++.h>
using namespace std;

bool elementExists(unordered_set<int> &hs, int key) {
    for(auto i: hs) {
        if(i == key)
            return true;
    }
    return false;
}

void countElements(vector<vector<int>> &mat, int n, int m, unordered_set<int> &hs) {
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<m; j++) {
            if(elementExists(hs, mat[i][j]))
                count++;
        }
        cout << count << "\n";
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
    int size;
    cin >> size;
    unordered_set<int> set;
    for(int i=0; i<size; i++) {
        int x;
        cin >> x;
       set.insert(x);
    }
    countElements(mat, n, m, set);
    return 0;
}