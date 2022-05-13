class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for(int x : nums){
            x = abs(x);
            
            if(nums[x - 1] > 0) nums[x - 1] *= -1;
            else ans.push_back(x);
        }
        return ans;
    }
};
