class Solution {
  public:
    //recursion
    int solveR(int n,vector<int>& arr,int curr,int prev){
        if(curr == n) return 0;
        
        int include = 0;
        
        if(prev == -1 || arr[curr] > arr[prev]){
            include = 1+solveR(n,arr,curr+1,curr);
        }
        int exclude = 0+solveR(n,arr,curr+1,prev);
        
        return max(include,exclude);
        
    }
    
    //recursion+Memoization
    int solveMemo(int n,vector<int>& arr,int curr,int prev,vector<vector<int>>&dp){
        
        if(curr == n) return 0;
        
        if(dp[curr][prev+1] != -1){
            return dp[curr][prev+1];
        }
        
        int include =0;
        if(prev == -1 || arr[curr] > arr[prev]){
            include = 1+solveMemo(n,arr,curr+1,curr,dp);
        }
        
        int exclude = 0+solveMemo(n,arr,curr+1,prev,dp);
        
        return dp[curr][prev+1] = max(include,exclude);
        
    }
    
    //tabulaiton
    int solveTab(int n,vector<int>& arr){
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        for(int curr=n-1;curr>=0;curr--){
            for(int prev = curr-1;prev >=-1;prev--){
                int take =0;
                
                if(prev == -1 || arr[curr] > arr[prev]){
                    take = 1+dp[curr+1][curr+1];
                }
                
                int notTake = 0+dp[curr+1][prev+1];
                
                dp[curr][prev+1] = max(take,notTake);
            }
        }
        
        return dp[0][0];
    }
  
    //so
    int solveSO(int n,vector<int>& arr){
        vector<int> currRow(n+1,0);
        vector<int> nextRow(n+1,0);
        
        for(int curr =n-1;curr>=0;curr--){
            for(int prev = curr-1;prev>=-1;prev--){
                
                int take = 0;
                if(prev == -1 || arr[curr] > arr[prev]){
                    take = 1 + nextRow[curr+1];
                }
                
                int nottake = 0+nextRow[prev+1];
                
                currRow[prev+1] = max(take,nottake);
                
            }
            
            nextRow = currRow;
        }
        
        return nextRow[0];
    }
    
    //dp with binary search
    int solveBS(int n,vector<int>& arr){
        if(n==0) return 0;
        
        vector<int> ans;
        
        ans.push_back(arr[0]);
        
        for(int i=1;i<n;i++){
            if(arr[i] > ans.back()){
                ans.push_back(arr[i]);
            }
            else{
                int index = lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
                
                ans[index] = arr[i];
            }
        }
        return ans.size();
    }
  
    int lis(vector<int>& arr) {
        int n = arr.size();
        
        //recursion
        // return solveR(n,arr,0,-1);
        
        //R+memo
        // vector<vector<int>> dp(n+1 , vector<int> (n+1,-1));
        // return solveMemo(n,arr,0,-1,dp);
        
        //Tabulation
        // return solveTab(n,arr);
        
        //SO
        // return solveSO(n,arr);
        
        //dp with binary search
        return solveBS(n,arr);
        
    }
};