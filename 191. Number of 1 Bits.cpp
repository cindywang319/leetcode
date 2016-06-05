class Solution {
public:
    int hammingWeight(uint32_t n) {
        int mask = 1, ans = 0;
        while(mask != 0) {
            ans += (n & mask) == 0 ? 0 : 1;
            mask <<= 1;
        }
        return ans;
    }
};