#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &ar, int i, int n) {
    if(i == n) {
        return;
    }
    reverseArray(ar, i+1, n);
    cout << ar[i] << " ";
}

int main() {
    int n;
    cin >> n;
    vector<int> ar (n);
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }

    reverseArray(ar, 0, n);
    return 0;
}