class Solution {
public:
    int singleNumber(int A[], int n) {
        int ans = 0;
        
        vector<int> bits(32, 1);
        
        for(int i = 1; i < 32; i++) {
            bits[i] = bits[i - 1] << 1;
        }
        
        for(int i = 0; i < 32; i++) {
            int tmp = 0;
            for(int j = 0; j < n; j++) {
                if(A[j] & bits[i]) {
                    tmp ++;
                }
            }
            
            if(tmp % 3 != 0) {
                ans |= 1 << i;
            }
            
        }
        
        return ans;
    }
};
