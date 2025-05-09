class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        int x = log2(n);
        return ((long long int)1 << x) == n;
    }
};
