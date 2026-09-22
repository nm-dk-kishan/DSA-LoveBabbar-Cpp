class Solution {
public:
    //recursion
    int solveR(vector<int>& sa,int i,int t){
        if(i==sa.size()) return 0;

        int include = sa[i]*(t+1) + solveR(sa,i+1,t+1);
        int exclude = 0 + solveR(sa,i+1,t);
        return max(include,exclude);
    }

    //recursion+Memoization
    int solveMemo(vector<int>& sa,int i,int t,vector<vector<int>>& dp){
        if(i==sa.size()) return 0;

        int include = sa[i]*(t+1) + solveMemo(sa,i+1,t+1,dp);
        int exclude = 0 + solveMemo(sa,i+1,t,dp);
        return max(include,exclude);
    }

    //Tabulation
    int solveTab(vector<int>& sa,int n){
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));

        for(int i=n-1;i>=0;i--){
            for(int t=i;t>=0;t--){
                int include = sa[i]*(t+1) + dp[i+1][t+1];
                int exclude = 0 + dp[i+1][t];

                dp[i][t] = max(include,exclude);
            }
        }
        return dp[0][0];
    }

    //so
    int solveSO(vector<int>& sa,int n){
        
        vector<int> curr(n+1,0);
        vector<int> next(n+1,0);

        for(int i=n-1;i>=0;i--){
            for(int t=i;t>=0;t--){
                int include = sa[i]*(t+1) + next[t+1];
                int exclude = 0 + next[t];

                curr[t] = max(include,exclude);
            }
            next=curr;
        }
        return next[0];
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        //recusrion
        // return solveR(satisfaction,0,0);

        //recursion+Memoization
        // vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        // return solveMemo(satisfaction,0,0,dp);

        //Tabulation
        // return solveTab(satisfaction,n);

        //SO
        return solveSO(satisfaction,n);
    }
};