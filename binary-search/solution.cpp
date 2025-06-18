#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int low, int high, int key) {
    if(low > high)
        return false;
    int mid = (low + high) / 2;
    cout << low << " " << high << " " << mid << "\n";
    if(arr[mid] == key)
        return true;
    else if(arr[mid] < key)
        return binarySearch(arr, mid+1, high, key);
    else if(arr[mid] > key) 
        return binarySearch(arr, low, mid-1, key);
}

int main() {
    int n, key;
    cin >> n >> key;
    vector<int> arr (n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    if(binarySearch(arr, 0, n-1, key)) {
        cout << "True";
    }  
    else {
        cout << "False";
    }
    return 0;
}