class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> dict;
        unordered_map<int, int> pos;
        unordered_map<int, int>::iterator mit;
        vector<vector<int>> ret;
        vector<int>::iterator vit;
        int idx = 0;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++) {
            dict[nums[i]] += 1;
            if(dict[nums[i]] > 1) {
                nums.erase(nums.begin() + i);
                i--;
            }
            else {
                pos[nums[i]] = i;
            }
        }
        
        for(int i = 0; i < nums.size(); i++) {
            dict[nums[i]] --;
            for(int j = i; j < nums.size(); j++) {
                if(dict[nums[j]] <= 0) continue;
                dict[nums[j]] --;
                int tmp_target = - nums[i] - nums[j];
                if(dict[tmp_target] > 0 && (pos[tmp_target] >= j)) {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(tmp_target);
                    ret.push_back(tmp);
                }                
                
                
                dict[nums[j]] ++;
            }
            dict[nums[i]] ++;
        }
        
    
        return ret;
        
    }
};