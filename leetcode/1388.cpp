class Solution {
public:
    //R
    int solveR(int i,int endi,vector<int>& a, int n){
        
        if(n==0 || i>endi) return 0;

        int take = a[i] + solveR(i+2,endi,a,n-1);
        int nottake = 0+ solveR(i+1,endi,a,n);

        return max(take,nottake);
    }

    //R+memo
    int solveMemo(int i,int endi,vector<int>& a, int n,vector<vector<int>>& dp){
        if(n==0 || i>endi) return 0;
        if(dp[i][n] != -1) return dp[i][n];

        int take = a[i] + solveMemo(i+2,endi,a,n-1,dp);
        int nottake = 0+ solveMemo(i+1,endi,a,n,dp);

        return dp[i][n] = max(take,nottake);
    }

    //tabulation
    int solveTab(vector<int>& a){

        int k = a.size();
        vector<vector<int>> dp1(k+2,vector<int> (k+2,0));
        vector<vector<int>> dp2(k+2,vector<int> (k+2,0));

        for(int i=k-2;i>=0;i--){
            for(int n=1;n<=k/3;n++){
                int take = a[i]+dp1[i+2][n-1];

                int nottake = 0+dp1[i+1][n];

                dp1[i][n] = max(take,nottake);
            }
        }

        int case1 = dp1[0][k/3];

        for(int i=k-1;i>=1;i--){
            for(int n=1;n<=k/3;n++){
                int take = a[i]+dp2[i+2][n-1];

                int nottake = 0+dp2[i+1][n];

                dp2[i][n] = max(take,nottake);
            }
        }

        int case2 = dp2[1][k/3];

        return max(case1,case2);
    }

    //so
    int solveSO(vector<int>& a){
        int k = a.size();

        vector<int> prev1(k+2,0);
        vector<int> curr1(k+2,0);
        vector<int> next1(k+2,0);

        vector<int> prev2(k+2,0);
        vector<int> curr2(k+2,0);
        vector<int> next2(k+2,0);

        for(int i=k-2;i>=0;i--){
            for(int n=1;n<=k/3;n++){
                int take = a[i]+next1[n-1];

                int nottake = 0+curr1[n];

                prev1[n] = max(take,nottake);
            }
            next1 = curr1;
            curr1 = prev1;
        }

        int case1 = curr1[k/3];

        for(int i=k-1;i>=1;i--){
            for(int n=1;n<=k/3;n++){
                int take = a[i]+next2[n-1];

                int nottake = 0+curr2[n];

                prev2[n] = max(take,nottake);
            }
            next2=curr2;
            curr2=prev2;
        }

        int case2 = curr2[k/3];

        return max(case1,case2);

    }

    int maxSizeSlices(vector<int>& slices) {
        //r
        // int n = slices.size();
        // int case1 = solveR(0,n-2,slices,n/3);
        // int case2 = solveR(1,n-1,slices,n/3);
        // return max(case1,case2);

        //r+memo
        // int k = slices.size();

        // vector<vector<int>> dp1(k,vector<int> (k,-1));
        // int case1 = solveMemo(0,k-2,slices,k/3,dp1);
        
        // vector<vector<int>> dp2(k,vector<int> (k,-1));
        // int case2 = solveMemo(1,k-1,slices,k/3,dp2); 

        // return max(case1,case2);

        //tabualtion
        // return solveTab(slices);

        //so
        return solveSO(slices); 
        
    }
};