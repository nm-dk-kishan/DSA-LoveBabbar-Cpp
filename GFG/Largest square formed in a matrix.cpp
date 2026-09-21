class Solution {
  public:
    //recursion
    int solveR(vector<vector<int>>& mat,int i,int j,int &maxi){
        if(i>=mat.size() || j>= mat[0].size()){
            return 0;
        }
        
        int right = solveR(mat,i,j+1,maxi);
        int diagonal = solveR(mat,i+1,j+1,maxi);
        int bottom = solveR(mat,i+1,j,maxi);
        
        if(mat[i][j] == 1){
           int ans = 1+min(right,min(bottom,diagonal));
           maxi = max(maxi,ans);
           return ans;
        }
        else{
            return 0;
        }
        
    }
    
    //recursion + memoization
    int solveMemo(vector<vector<int>>& mat,int i,int j,int &maxi,vector<vector<int>>& dp){
        if(i>=mat.size() || j>= mat[0].size()){
            return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int right = solveMemo(mat,i,j+1,maxi,dp);
        int diagonal = solveMemo(mat,i+1,j+1,maxi,dp);
        int bottom = solveMemo(mat,i+1,j,maxi,dp);
        
        if(mat[i][j] == 1){
            dp[i][j] = 1+min(right,min(bottom,diagonal));
            maxi = max(maxi, dp[i][j]);
            return dp[i][j];
        }
        else{
            return dp[i][j] = 0;
        }
        
    }
    
    //tabulation
    int solveTab(vector<vector<int>>& mat,int &maxi){
        
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>> dp(row+1,vector<int>(col+1,0));
        
        for(int i = row-1;i>=0;i--){
            for(int j =col-1;j>=0;j--){
                int right = dp[i][j+1];
                int diagonal = dp[i+1][j+1];
                int bottom = dp[i+1][j];
                
                if(mat[i][j] == 1){
                    dp[i][j] = 1+ min(right,min(diagonal,bottom));
                    maxi = max(maxi,dp[i][j]);
                }
                else{
                    dp[i][j]=0;
                }
            }
            
        }
        return maxi;
        
    }
    
    //SO
    int solveSO(vector<vector<int>>& mat,int &maxi){
        int row = mat.size();
        int col = mat[0].size();
        
        vector<int> curr(col+1,0);
        vector<int> next(col+1,0);
        
        for(int i =row-1;i>=0;i--){
            for(int j = col-1;j>=0;j--){
                int right = curr[j+1];
                int diagonal = next[j+1];
                int down = next[j];
                
                if(mat[i][j] == 1){
                    curr[j] = 1+min(right,min(down,diagonal));
                    maxi = max(maxi,curr[j]);
                }else{
                    curr[j] = 0;
                }
            }
            next = curr;
        }
        return maxi;
    }
  
    int maxSquare(vector<vector<int>>& mat) {
        
        int maxi=0;
        
        //recursion
        // int i=0,j = 0;
        // return solveR(mat,i,j,maxi);
        
        //R + Memoization
        // int n = mat.size();
        // int m = mat[0].size();

        // vector<vector<int>> dp(n, vector<int>(m, -1));
        // return solveMemo(mat,0,0,maxi,dp);
        
        //tabulation
        // return solveTab(mat,maxi);
        
        //so
        
        return solveSO(mat,maxi);
    }
};