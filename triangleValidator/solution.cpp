#include<bits/stdc++.h>
using namespace std;

bool isValidTriangle(int a, int b, int c) {
    return ((a + b) > c) && ((b + c) > a) && ((a + c) > b); 
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(isValidTriangle(a, b, c))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}