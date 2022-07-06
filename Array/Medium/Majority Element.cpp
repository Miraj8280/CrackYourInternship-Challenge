class Solution {
public:
    int majorityElement(vector<int>& nums) {
      // using sorting
        /*
        sort(nums.begin(), nums.end());
        
        return nums[nums.size()/2];
        
        // TC : O(nlogn)
        // SC : O(1)
        */
        
        
        /*
        
        // using hash tabel
        
        unordered_map<int, int> um;
        
        for(int it : nums){
            um[it]++;
            
            if(um[it] > nums.size() / 2)
                return it;
        }
        return 0;
         
         // TC : O(n)
         // SC : O(n)
        */
      
       // optimal solution - Boyer Moore's Voting Algorithm
        
        int majority, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
            }
            if(majority == nums[i]) count++;
            else count--;
        }
        return majority;
        
       // TC : O(n)
      // SC : O(1)
      
    }
};
