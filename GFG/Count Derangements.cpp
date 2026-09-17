class Solution {
  public:
    //recurrsion
    int solveR(int n){
        if(n==1) return 0;
        if(n==2) return 1;
        
        return (n-1) * (solveR(n-1) + (solveR(n-2)));
    }
    
    //recurrsion+Memoization
    int solveMemo(int n,vector<int>& dp){
        if(n==1) return 0;
        if(n==2) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        dp[n] = (n-1) * (solveMemo(n-1,dp) + (solveMemo(n-2,dp)));
        
        return dp[n];
    }
    
    //tabulation
    int solveTab(int n){
        vector<int> dp(n+1,0);
        dp[1] = 0;
        dp[2] = 1;
        
        for(int i =3;i<=n;i++){
            int f = dp[i-1];
            int s = dp[i-2];
            int sum = (f+s);
            
            int ans = ((i-1) * sum);
            dp[i]= ans;
        }
        return dp[n];
    }
    
    //most optimize
    int solveMO(int n){
        if(n==1) return 0;
        if(n==2) return 1;
        
        int a = 0;
        int b = 1;
        
        for(int i =3;i<=n;i++){
            int curr = (i-1)*(a+b);
            a=b;
            b=curr;
        }
        return b;
    }
  
    int derangeCount(int n) {
        //recurrsion
        // return solveR(n);
        
        //recurrsion+Memoization
        // vector<int> dp(n+1,-1);
        // return solveMemo(n,dp);
        
        //Tabulation
        // return solveTab(n);
        
        //Most Optimize
        return solveMO(n);
    }
};