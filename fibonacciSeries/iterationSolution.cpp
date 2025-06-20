#include <bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n) {
    if(n == 0 || n == 1)
        return n;

    int a = 0, b = 1;
    for(int i=2; i<=n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacciNumber(n);   
    return 0;
}