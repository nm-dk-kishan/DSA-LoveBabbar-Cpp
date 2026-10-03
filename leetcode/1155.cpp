class Solution {
public:
    const int MOD = 1e9 + 7;

    //r
    int solveR(int d, int f, int t){
        if(t<0 || (d==0 && t!=0) || (t==0 && d!=0)){
            return 0;
        }
        if(d==0 && t==0) return 1;
        
        int ans = 0;
        for(int i=1;i<=f;i++){
            ans = (ans + solveR(d-1, f, t-i)) % MOD;
        }
        return ans;
    }
    
    //r+Memo
    int solveMemo(int d, int f, int t,vector<vector<int>>& dp){
        if(t<0 || (d==0 && t!=0) || (t==0 && d!=0)){
            return 0;
        }
        if(d==0 && t==0) return 1;
        
        if(dp[d][t] != -1) return dp[d][t];
        
        int ans = 0;
        for(int i=1;i<=f;i++){
            ans = (ans + solveMemo(d-1, f, t-i, dp)) % MOD;
        }
        return dp[d][t]=ans;
    }
    
    //tabulation
    int solveTab(int d, int f, int t){
        vector<vector<int>> dp(d+1,vector<int>(t+1,0));
        dp[0][0] = 1;
        
        for(int dice =1;dice<=d;dice++){
            for(int target = 1;target<=t;target++){
                int ans =0;
                
                for(int i=1;i<=f;i++){
                    if(target - i >= 0){
                        ans = (ans + dp[dice-1][target-i]) % MOD;
                    }
                }
                dp[dice][target] = ans;
            }
        }
        return dp[d][t];
    }
    
    //so
    int solveSO(int d, int f, int t){
        vector<int> prev(t+1,0);
        vector<int> curr(t+1,0);
        
        prev[0] = 1;
        for(int dice=1;dice<=d;dice++){

            fill(curr.begin(), curr.end(), 0);

            for(int target =1;target<=t;target++){
                int ans =0;
                
                for(int i=1;i<=f;i++){
                    if(target-i>=0){
                        ans = (ans + prev[target-i]) % MOD;
                    }
                }
                curr[target] = ans;
            }
            prev= curr;
        }
        return prev[t];
    }

    int numRollsToTarget(int n, int k, int target) {
        //r
        // return solveR(n,m,x);
        
        //r+memo
        // vector<vector<int>> dp(n+1,vector<int> (target+1,-1));
        // return solveMemo(n,k,target,dp);
        
        //tabulation
        // return solveTab(n,k,target);
        
        //so
        return solveSO(n,k,target);
    }
};