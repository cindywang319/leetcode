class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int bitsum[32], ans = 0, mask = 1;
        for(int i = 0; i < 32; i++) bitsum[i] = 0;
        
        for(int i = 0; i < nums.size(); i ++) {
            int bit = 0;
            mask = 1;
            while(mask != 0) {
                bitsum[bit++] += ((nums[i] & mask) == 0) ? 0 : 1;
                mask <<= 1;
            }
        }
        for(int i = 31; i >= 0; i--) {
            ans <<= 1;
            ans += bitsum[i] % 3;
        }
        return ans;
    }
};