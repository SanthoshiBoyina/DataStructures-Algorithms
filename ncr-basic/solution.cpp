#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    int res = 1;
    for(int i=1; i<=n; i++) {
        res = res * i;
    }
    return res;
}

int ncr(int n, int r){
    return factorial(n)/(factorial(n-r) * factorial(r));
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << ncr(n, r);  
    return 0;
}