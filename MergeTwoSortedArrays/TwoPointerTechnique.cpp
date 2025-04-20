class Solution {
public:
    void merge(vector<int>& ar, int n, vector<int>& br, int m) {
        int p1 = n-1, p2 = m-1, k = n+m-1;
        while(p1 >= 0 && p2 >= 0) {
            if(ar[p1] > br[p2]) {
                ar[k--] = ar[p1--];
            }
            else {
                ar[k--] = br[p2--];
            }
        }
        while(p1 >= 0) {
            ar[k--] = ar[p1--];
        }
        while(p2 >= 0) {
            ar[k--] = br[p2--];
        }
    }
};
