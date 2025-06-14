#include <bits/stdc++.h>
using namespace std;

bool isArmstrongNumber(int n) {
    int res = 0, num = n;
    while(num > 0) {
        int rem = num % 10;
        res = res + (rem*rem*rem);
        num = num/10;
    }
    return res == n;
}

int main() {
    int n;
    cin >> n;

    if(isArmstrongNumber(n))
        cout << "Yes";
    else 
        cout << "No"; 
    return 0;
}