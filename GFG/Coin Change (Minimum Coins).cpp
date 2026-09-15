class Solution {
  public:
    int solvetab(vector<int> &coins, int sum){
        vector<int> dp(sum+1,INT_MAX);
        dp[0]=0;
        
        for(int i =1;i<=sum;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0 && dp[i-coins[j]] != INT_MAX){
                    dp[i] = min(dp[i],1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[sum] == INT_MAX){
            return-1;
        }
        return dp[sum];
    }
    
    int minCoins(vector<int> &coins, int sum) {
        // code here
        return solvetab(coins,sum);
    }
};