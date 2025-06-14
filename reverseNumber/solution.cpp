#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;
    int num = abs(n);

    while(num > 0) {
        int rem = num % 10;
        res = res*10 + rem;
        num = num / 10;
    }

    if(n > 0)
        cout << res;
    else 
        cout << res * -1;
    return 0;
}