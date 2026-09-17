class Solution {
public:
    // recursion
    int solveR(int W, vector<int>& v, int i, vector<int>& wt) {

        if (i == 0) {
            if (wt[i] <= W)
                return v[0];
            else
                return 0;
        }

        int include = 0;

        if (wt[i] <= W) {
            include = v[i] + solveR(W - wt[i], v, i - 1, wt);
        }

        int exclude = solveR(W, v, i - 1, wt);

        return max(include, exclude);
    }
    
    // recursion+Memoization
    int solveMemo(vector<int>& wt, vector<int>& v,int i, int W, vector<vector<int>>& dp){
        
        if(i==0){
            if(wt[0] <= W) return v[0];
            else return 0;
        }
        if(dp[i][W] != -1) return dp[i][W];
        
        int include = 0;
        if(wt[i] <= W){
            include = v[i]+solveMemo(wt,v,i-1,W-wt[i],dp);
        }
        int exclude = 0+solveMemo(wt,v,i-1,W,dp);
        
        dp[i][W] = max(include,exclude);
        return dp[i][W];
    }

    //tabulation
    int solveTab(vector<int>& wt, vector<int>& v,int n, int W){
        
        vector<vector<int>> dp(n+1,vector<int>(W+1,0));
        
        for(int w = wt[0]; w<=W; w++){
            dp[0][w] = v[0];
        }
        
        for(int i =1;i<n;i++){
            for(int w=0;w<=W;w++){
                int include = 0;
                
                if(wt[i] <= w){
                    include = v[i] + dp[i-1][w-wt[i]];
                }
                
                int exclude = 0 + dp[i-1][w];
                
                dp[i][w] = max(include,exclude);
            }
        }
        return dp[n-1][W];
    }
    
    //SO
    int solveSO(vector<int>& wt, vector<int>& v,int n, int W){
        vector<int> prev(W+1,0);
        vector<int> curr(W+1,0);
         
        for (int w = wt[0]; w <= W; w++) {
            prev[w] = v[0];
        }
        
        for(int i =1;i<n;i++){
            for(int w = 0;w<=W;w++){
                int include = 0;
                
                if(wt[i] <= w){
                    include = v[i] + prev[w-wt[i]];
                }
                int exclude = 0+prev[w];
                
                curr[w] = max(include,exclude);
            }
            prev = curr;
        }
        return prev[W];
    }

    int knapsack(int W, vector<int>& val, vector<int>& wt) {
        
        // int i = val.size() - 1;
        
        //recursion
        // return solveR(W, val, i, wt);
        
        //recursion+Memoization
        // vector<vector<int>> dp(i+1,vector<int>( W+1,-1));
        // return solveMemo(wt,val,i,W,dp);
        
        //tabulation
        // int i = val.size();
        // return solveTab(wt,val,i,W);
        
        //SO
        int i =val.size();
        return solveSO(wt,val,i,W);
        
    }
};