#include <bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n) {
    if(n == 0 || n == 1)
        return n;

    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

int main() {
    int n;
    cin >> n;

    cout << fibonacciNumber(n);   
    return 0;
}