class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        
        for(int i = 0; i < nums.size(); i++){
            int x = target - nums[i]; // target = x + nums[i]
            
            if(m.find(x) != m.end()){
               return {i, m[x]};
            }
            m[nums[i]] = i;
        }
        return {};
        
    }
};
