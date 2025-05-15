#include<bits/stdc++.h>
using namespace std;

void printEvenOddSum(vector<int> &ar, int n) {
    int oddSum = 0, evenSum = 0;
    for(int i=0; i<n; i++) {
        if(ar[i] % 2 == 0)
            evenSum += ar[i];
        else
            oddSum += ar[i];
    }
    cout << oddSum << " " << evenSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar (n);
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }

    printEvenOddSum(ar, n);
    return 0;
}