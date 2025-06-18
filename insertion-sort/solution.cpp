#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertionSort(vector<int> &arr, int n) {
    for(int i=1; i<n; i++) {
        int j = i-1, temp = arr[i];
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        display(arr, n);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr (n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    return 0;
}