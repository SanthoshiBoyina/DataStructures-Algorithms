#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &ar, int n) {
    for(int i=0; i<n; i++) {
        cout << ar[i] << " ";
    }
}

void mergeTwoSortedArrays(vector<int> &ar, int n, vector<int> &br, int m) {
    vector<int> cr (n+m, 0);
    for(int i=0; i<n; i++) {
        cr[i] = ar[i];
    }
    for(int i=n; i<(n+m); i++) {
        int j = i-1;
        int temp = br[i-n];
        while(j >= 0 && cr[j] > temp) {
            cr[j+1] = cr[j];
            j--;
        }
        cr[j+1] = temp;
    }

    display(cr, n+m);
}

int main() {
    int n;
    cin >> n;
    vector<int> ar (n);
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    };
    int m;
    cin >> m;
    vector<int> br (m);
    for(int j=0; j<m; j++) {
        cin >> br[j];
    }

    mergeTwoSortedArrays(ar, n, br, m);
    return 0;
}
