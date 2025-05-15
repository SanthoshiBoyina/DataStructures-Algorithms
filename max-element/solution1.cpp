#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int> &ar, int n) {
    int ans = INT_MIN;
    for(int i=0; i<n; i++) {
        if(ans < ar[i])
            ans = ar[i];
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar (n);
    for(int i=0; i<n; i++) 
        cin >> ar[i];

    cout << maxElement(ar, n);
    return 0;
}