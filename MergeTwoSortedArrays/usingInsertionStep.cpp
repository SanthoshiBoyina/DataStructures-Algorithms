class Solution {
public:
    void merge(vector<int>& ar, int n, vector<int>& br, int m) {
        for(int i=n; i<(n+m); i++) {
            int j = i-1, temp = br[i-n];
            while(j >= 0 && ar[j] > temp) {
                ar[j+1] = ar[j];
                j--;
            }
            ar[j+1] = temp;
        }
    }
};
