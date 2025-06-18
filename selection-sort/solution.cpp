#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void selectionSort(vector<int> &arr, int n) {
    for(int i=0; i<n-1; i++) {
        int index = i;
        for(int j=i+1; j<n; j++) {
            if(arr[index] > arr[j]) {
                index = j;
            }
        }
        if(index != i) {
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
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

    selectionSort(arr, n);
    return 0;
}