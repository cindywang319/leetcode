class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        vector<int> ret;
        
        for(int i = 0; i < nums.size(); i++) {
            dict[nums[i]] = i;
        }
        
        for(int i = 0; i < nums.size(); i++) {
            if(dict.find(target - nums[i]) != dict.end()) {
                int j = dict[target - nums[i]];
                if(i != j) {
                    ret.push_back(i);
                    ret.push_back(j);
                    break;
                }
            }
        }
        

        return ret;
        
        
    }
};