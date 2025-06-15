#include <bits/stdc++.h>
using namespace std;

void multiplicationTable(int n) {
    for(int i=1; i<= 10; i++) {
        cout << n << " * " << i << " = " << n*i << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    multiplicationTable(n);  
    return 0;
}