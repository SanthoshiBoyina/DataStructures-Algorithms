#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int n) {
    if(n == 0 || n == 1) 
        return 1;
    return factorial(n-1) * n;
}

int catalanNumber(int n) {
    return factorial(2*n)/(factorial(n) * factorial(n+1));
}

int main() {
    int n;
    cin >> n;

    cout << catalanNumber(n); 
    return 0;
}