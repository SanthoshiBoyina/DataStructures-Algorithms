#include<bits/stdc++.h>
using namespace std;

int main() {
    int sum_of_elements = 0, sum_of_nNumbers = 50*(101);

    for(int i=0; i<99; i++) {
        int x;
        cin >> x;
        sum_of_elements += x;
    }
    cout << sum_of_nNumbers - sum_of_elements;
    return 0;
}