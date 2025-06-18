#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n, key;
    cin >> n >> key;
    vector<int> arr (n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << linearSearch(arr, n, key);
    return 0;
}