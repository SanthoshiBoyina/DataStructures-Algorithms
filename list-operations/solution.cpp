#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void append(vector<int> &arr, int x) {
    arr.push_back(x);
}

int countOfX(vector<int> &arr, int key) {
    int count = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == key)
            count++;
    }
    return count;
}

void insertAtPos(vector<int> &arr, int pos, int x) {
    arr.insert(arr.begin() + pos, x);
}

void extend(vector<int> &arr) {
    vector<int> temp (arr);
    for(int i=0; i<temp.size(); i++) {
        arr.push_back(temp[i]);
    }
}

void reverse(vector<int> &arr) {
    int p1 = 0, p2 = arr.size()-1;
    while(p1 < p2) {
        int temp = arr[p1];
        arr[p1] = arr[p2];
        arr[p2] = temp;
        p1++;
        p2--;
    }
}

int indexOfX(vector<int> &arr, int x) {
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int length(vector<int> &arr) {
    return arr.size();
}

void sort(vector<int> &arr) {
    for(int i=1; i<arr.size(); i++) {
        int j = i-1, temp = arr[i];
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        string key;
        cin >> key;
        
        if(key == "append") {
            int x;
            cin >> x;

            append(arr, x);
            display(arr);
        }
        else if(key == "count") {
            int x;
            cin >> x;
            cout << countOfX(arr, x) << "\n";
        }
        else if(key == "insert") {
            int pos, x;
            cin >> pos >> x;

            insertAtPos(arr, pos, x);
            display(arr);
        }
        else if(key == "extend") {
            extend(arr);
            display(arr);
        }
        else if(key == "reverse") {
            reverse(arr);
            display(arr);
        }
        else if(key == "index") {
            int x;
            cin >> x;
        
            cout << indexOfX(arr, x) << "\n";
        }
        else if(key == "length") {
            cout << length(arr) << "\n";
        }
        else if(key == "sort") {
            sort(arr);
            display(arr);
        }
    }
    return 0;
}