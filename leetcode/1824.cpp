class Solution {
public:
    //recusrion
    int solveR(vector<int>& ob,int cl,int cp){
        int n = ob.size()-1;
        if(cp == n) return 0;
        if(ob[cp+1] != cl){
            return solveR(ob,cl,cp+1);
        }
        else{
            int ans = INT_MAX;
            for(int i=1;i<=3;i++){
                if(cl!=i && ob[cp]!=i){
                    ans = min(ans,1+solveR(ob,i,cp));
                }
            }
            return ans;
        }
    }

    //recusrion+Memoization
    int solveMemo(vector<int>& ob,int cl,int cp,vector<vector<int>>& dp){
        int n = ob.size()-1;
        if(cp == n) return 0;

        if(dp[cl][cp] != -1){
            return dp[cl][cp];
        } 

        if(ob[cp+1] != cl){
            return solveMemo(ob,cl,cp+1,dp);
        }
        else{
            int ans = INT_MAX;
            for(int i=1;i<=3;i++){
                if(cl!=i && ob[cp]!=i){
                    ans = min(ans,1+solveMemo(ob,i,cp,dp));
                }
            }
            dp[cl][cp] = ans;
            return dp[cl][cp];
        }
    }

    //tabulation
    int solveTab(vector<int>& ob){
        int n = ob.size()-1;
        vector<vector<int>> dp(4,vector<int>(n+1,INT_MAX));

        dp[0][n]=0;
        dp[1][n]=0;
        dp[2][n]=0;
        dp[3][n]=0;

        for(int cp=n-1;cp>=0;cp--){
            for(int cl=1;cl<=3;cl++){
                if(ob[cp+1]!=cl){
                    dp[cl][cp] = dp[cl][cp+1];
                }
                else{
                    int ans = INT_MAX;
                    for(int i=1;i<=3;i++){
                        if(cl!=i && ob[cp]!=i){
                            ans = min(ans,1+dp[i][cp+1]);
                        }
                        dp[cl][cp] = ans;
                    }
                }
            }
        }
        return dp[2][0];
    }

    //so
    int solveSO(vector<int>& ob){
        int n = ob.size()-1;
        
        vector<int> curr(4,INT_MAX);
        vector<int> next(4,INT_MAX);

        next[0]=0;
        next[1]=0;
        next[2]=0;
        next[3]=0;

        for(int cp=n-1;cp>=0;cp--){
            for(int cl=1;cl<=3;cl++){
                if(ob[cp+1]!=cl){
                    curr[cl] = next[cl];
                }
                else{
                    int ans = 1e9;
                    for(int i=1;i<=3;i++){
                        if(cl!=i && ob[cp]!=i){
                            ans = min(ans,1+next[i]);
                        }
                    }
                    curr[cl] = ans;
                }
            }

            next = curr;
        }
        return next[2];
    }

    int minSideJumps(vector<int>& obstacles) {
        //recusrion
        // return solveR(obstacles,2,0);

        
        //recusrion+Memoization
        // vector<vector<int>> dp(4,vector<int> (obstacles.size(),-1));
        // return solveMemo(obstacles,2,0,dp);

        // tabulation
        // return solveTab(obstacles);

        //so
        return solveSO(obstacles);


    }
};