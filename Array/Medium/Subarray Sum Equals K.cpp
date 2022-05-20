class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, sum = 0;
        unordered_map<int, int> um = {{0, 1}};
        
        for(int i = 0; i < nums.size(); ++i){
            sum += nums[i];
            count += um[sum - k];
            um[sum]++;
        }
        return count;
    }
};
