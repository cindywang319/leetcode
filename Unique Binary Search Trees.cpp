class Solution {
public:
    int numTrees(int n) {
        if(n < 1) return 0;
        
        int ans[n + 1];
        memset(ans, 0, sizeof(ans));
        ans[0] = 1;
        
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < i; j++) {
                ans[i] += ans[j]*ans[i - j - 1];
            }
        }
        
        
        return ans[n];
    }
};
