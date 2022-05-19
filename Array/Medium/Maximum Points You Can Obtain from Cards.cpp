class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size(), sumFromBack = 0;
        int sumFromFront = accumulate(arr.begin(), arr.begin() + k, 0);
        
        // int maxScore = sumFromFront, total = 0;
        int maxScore = sumFromFront;
        for(int i = 0; i < k; ++i){
            // sumFromBack += arr[n - i - 1];
            // sumFromFront -= arr[k - i - 1];
            sumFromFront = sumFromFront - arr[k - i - 1] + arr[n - i - 1];
            maxScore = max(maxScore, sumFromFront);
        }
        return maxScore;
    }
};
