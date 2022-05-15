class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // brute force
        /*
        int profitMax = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[j] > prices[i]){
                    profitMax = max((prices[j] - prices[i]), profitMax);
                }
            }
        }
        return profitMax;
        */
        
        // optimal solution
        
        int profitMax = 0, priceMin = INT_MAX;
        
        for(int i = 0; i < prices.size(); i++){
            priceMin = min(prices[i], priceMin);
            int priceDiff = prices[i] - priceMin;
            
            profitMax = max(priceDiff, profitMax);
        }
        return profitMax;
    }
};
