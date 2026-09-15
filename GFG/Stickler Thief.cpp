class Solution {
  public:
    int solveTab(vector<int>& arr){
        int n = arr.size();
        vector<int> dp(n,0);
        dp[0] = arr[0];
        
        for(int i =1;i<=n;i++){
            int incl = dp[i-2]+arr[i];
            int excl = dp[i-1]+0;
            
            dp[i] = max(incl,excl);
        }
        return dp[n-1];
    }
  
    int solveSO(vector<int>& arr){
        int n = arr.size();
        int prev2 =0,prev1=arr[0];
        for(int i =1;i<n;i++){
            int incl = prev2+arr[i];
            int excl = prev1 + 0;
            
            int ans = max(incl,excl);
            prev2 = prev1;
            prev1=ans;
        }
        return prev1;
    }
  
    int findMaxSum(vector<int>& arr) {

        // return solveTab(arr);
        return solveSO(arr);
    }
};