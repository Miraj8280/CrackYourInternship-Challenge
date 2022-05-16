class Solution {
    void kSum(vector<int>& arr, vector<int> curr, vector<vector<int>>& ans, int k, int index, int target){
        
        // base case
        if((arr.size() - index) < k || target < (1LL)*arr[index] * k || target >  (1LL)*arr.back() * k)
            return;
        
        // 2Sum
        if(k == 2){
            int left = index, right = arr.size() - 1, sum;
            
            while(left < right){
                sum = arr[left] + arr[right];
                
                if(sum == target){
                    curr.push_back(arr[left]);
                    curr.push_back(arr[right]);
                    ans.push_back(curr);
                    
                    curr.pop_back();
                    curr.pop_back();
                    
                    left++, right--;
                    while(left < right && arr[left] == arr[left - 1]) left++;
                    while(left < right && arr[right] == arr[right + 1]) right--;
                }
                else if(sum < target) left++;
                else right--;
            }
        }
        else if(k > 2){
            // iterate over all possible combinations
            
            for(int i = index; i < arr.size() - (k - 1); ++i){
                if(i == index || i > index && arr[i] != arr[i - 1]){
                    curr.push_back(arr[i]);
                    kSum(arr, curr, ans, k - 1, i + 1, target - arr[i]);
                    curr.pop_back();
                }
            }
        }
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        
        kSum(nums, curr, ans, 4, 0, target);
        return ans;
    }
};
