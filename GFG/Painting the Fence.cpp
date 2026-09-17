class Solution {
  public:
    //recursion
    int solveR(int n, int k){
        if(n==1) return k;
        if(n==2) return (k+(k*(k-1)));
        
        int ans = (solveR(n-2,k)*(k-1)) +(solveR(n-1,k)*(k-1)); 
        
        return ans;
    }
    
    //recursion+Memoization
    int solveMemo(int n,int k,vector<int>& dp){
        if(n==1) return k;
        if(n==2) return (k+(k*(k-1)));
        
        if(dp[n] != -1) return dp[n];
        
        dp[n] = (solveMemo(n-2,k,dp) * (k-1) + (solveMemo(n-1,k,dp)*(k-1)));
        
        return dp[n];
    }
    
    //tabulation
    int solveTab(int n,int k){
        vector<int> dp(n+1,0);
        
        dp[1]=k;
        dp[2]=(k+(k*(k-1)));
        
        for(int i=3;i<=n;i++){
            dp[i]=(dp[i-2])*(k-1) + (dp[i-1]*(k-1));
        }
        
        return dp[n];
    }
    
    //SO
    int solveSO(int n,int k){
        
        if(n==1) return k;
        
        int prev1=k;
        int prev2=(k+(k*(k-1)));
        
        for(int i=3;i<=n;i++){
            int ans = (prev2+prev1) *(k-1);
            
            prev1=prev2;
            prev2=ans;
        }
        return prev2;
    }
  
    int countWays(int n, int k) {
        //recursion
        // return solveR(n,k);
        
        //recursion+Memoization
        // vector<int> dp(n+1,-1);
        // return solveMemo(n,k,dp);
        
        //tabulation
        // return solveTab(n,k);
        
        //SO
        return solveSO(n,k);
    }
};