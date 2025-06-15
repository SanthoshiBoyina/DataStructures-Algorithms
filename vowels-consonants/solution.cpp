#include <bits/stdc++.h>
using namespace std;

void vowelsConsonants(string str) {
    int countVowels = 0;
    int i=0; 
    while(i < str.length()) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            countVowels++;
        }
        i++;
    }
    cout << countVowels << " " << str.length() - countVowels;
}

int main() {
    string str;
    cin >> str;

    vowelsConsonants(str); 
    return 0;
}