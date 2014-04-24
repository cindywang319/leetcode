class Solution {
public:
    int maxArea(vector<int> &height) {
        int ret = 0;
        if(height.size() <= 1) return ret;
        
        int left = 0, right = height.size() - 1;
        while(left < right) {
            int tmp = min(height[left], height[right]) * (right - left);
            ret = max(ret, tmp);
            if(height[left] > height[right])
                right--;
            else
                left ++;
        }
        
        return ret;
    }
};
