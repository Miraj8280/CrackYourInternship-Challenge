 class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        if(n == 0 || m == 0) return 0;
        if(n < m) return -1;
        
        sort(a.begin(), a.end());
        long long mnDiff = INT_MAX;
        for(int i = 0; i + m - 1 < n; ++i){
            long long diff = a[i + m - 1] - a[i];
            mnDiff = min(mnDiff, diff);
        }
        return mnDiff;
    } 
 };
