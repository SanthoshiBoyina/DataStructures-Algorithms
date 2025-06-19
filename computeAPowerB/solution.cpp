#include <bits/stdc++.h>
using namespace std;

long long int aPowerB(int a, int b) {
    if(b == 0)
        return 1;
    long long int ans = 1;
    for(int i=0; i<b; i++) {
        ans = ans * a;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << aPowerB(a, b);  
    return 0;
}