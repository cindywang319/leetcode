class Solution {
public:
    int maxSubArray(int A[], int n) {
        int cachemax = A[0], curmax = A[0];
        
        for (int i = 1; i < n; i++) {
            curmax = max(curmax + A[i], A[i]);
            cachemax = max(curmax, cachemax);
        }
        
        return cachemax;
    }
};
