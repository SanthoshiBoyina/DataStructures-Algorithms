#include<bits/stdc++.h>
using namespace std;

void printFrequencies(vector<int> &ar, int n) {
    int zeros = 0, positives = 0, negatives = 0;
    for(int i=0; i<n; i++) {
        if(ar[i] < 0)
            negatives++;
        else if(ar[i] > 0)
            positives++;
        else    
            zeros++;
    }
    cout << zeros << " " << positives << " " << negatives;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar (n);
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }

    printFrequencies(ar, n);
    return 0;
}