class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int curr = 0, count = 0;
        unordered_map<int, int> um = {{0, 1}};
        
        for(int i = 0; i < nums.size(); ++i){
            curr = (curr + nums[i] % k + k) % k;
            count += um[curr];
            um[curr]++;
        }
        
        return count;
    }
};
