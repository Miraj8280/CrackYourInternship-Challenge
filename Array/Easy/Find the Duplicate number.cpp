class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Approach - 1: Brute force
            
        /*
        sort(nums.begin(), nums.end());
        int duplicate; // tracks duplicate element in nums[]
        
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == nums[i + 1]){
                duplicate = nums[i];
                break;
            }
        }
        return duplicate;
        
        // TC : O(nlogn)
        // SC : O(1)
        
        */
        
        /*
        // Approach - 2 : Index sort
        
        for(int i = 0; i < nums.size();){
            int x = nums[i];
            
            if(x == i + 1){
                i++;
            }
            else if(x == nums[x - 1]){
                return x;
            }
            else{
                nums[i] = nums[x - 1];
                nums[x - 1] = x;
            }
        }
        return 0;
        
        // TC : O(n)
        // SC : O(1)
        */
        
        // Approach - 3 : Binary Search
        
        int left = 1, right = nums.size() - 1;
        
        while(left <= right){
            int mid = left + (right - left) / 2;
            int count = 0;
            
            for(int x : nums){
                if(x <= mid) count++;
            }
            
            if(count <= mid) left = mid + 1;
            else right = mid - 1;
        }
        return left;
        
        // TC : O(logn)
        //  SC : O(1)
    }
};
