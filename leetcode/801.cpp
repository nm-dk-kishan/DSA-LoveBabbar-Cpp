class Solution {
public:
    // Recursion
    int solveR(vector<int>& n1, vector<int>& n2, int i, bool S) {
        if (i == n1.size())
            return 0;

        int ans = INT_MAX;
        int p1 = n1[i - 1];
        int p2 = n2[i - 1];

        if (S) {
            swap(p1, p2);
        }
        if (n1[i] > p1 && n2[i] > p2) {
            ans = solveR(n1, n2, i + 1, 0);
        }
        if (n1[i] > p2 && n2[i] > p1) {
            ans = min(ans, 1 + solveR(n1, n2, i + 1, 1));
        }

        return ans;
    }

    // R+Memo
    int solveMemo(vector<int>& n1, vector<int>& n2, int i, bool S,
                  vector<vector<int>>& dp) {
        if (i == n1.size())
            return 0;

        if (dp[i][S] != -1)
            return dp[i][S];

        int ans = INT_MAX;
        int p1 = n1[i - 1];
        int p2 = n2[i - 1];

        if (S) {
            swap(p1, p2);
        }
        if (n1[i] > p1 && n2[i] > p2) {
            ans = solveMemo(n1, n2, i + 1, 0, dp);
        }
        if (n1[i] > p2 && n2[i] > p1) {
            ans = min(ans, 1 + solveMemo(n1, n2, i + 1, 1, dp));
        }

        return dp[i][S] = ans;
    }

    // Tabulation
    int solveTab(vector<int>& n1, vector<int>& n2,int n) {

        vector<vector<int>> dp(n + 1, vector<int>(2, 0));

        for (int i = n-1; i >= 1; i--) {
            for (int S = 1; S >= 0; S--) {

                

                int ans = INT_MAX;
                int p1 = n1[i - 1];
                int p2 = n2[i - 1];

                if (S) {
                    swap(p1, p2);
                }
                if (n1[i] > p1 && n2[i] > p2) {
                    ans = dp[i+1][0];
                }
                if (n1[i] > p2 && n2[i] > p1) {
                    ans = min(ans, 1 + dp[i+1][1]);
                }

                dp[i][S] = ans;
            }
        }
        return dp[1][0];
    }

    // SO
    int solveSO(vector<int>& n1, vector<int>& n2,int n) {

        int swap =0;
        int noswap =0;
        int currswap=0;
        int currnoswap =0;

        for (int i = n-1; i >= 1; i--) {
            for (int S = 1; S >= 0; S--) {

                int ans = INT_MAX;
                int p1 = n1[i - 1];
                int p2 = n2[i - 1];

                if (S) {
                    int temp = p2;
                    p2 = p1;
                    p1 = temp;
                }
                if (n1[i] > p1 && n2[i] > p2) {
                    ans = noswap;
                }
                if (n1[i] > p2 && n2[i] > p1) {
                    ans = min(ans, 1 +swap);
                }

                if(S) currswap = ans;
                else currnoswap = ans;
            }
            swap = currswap;
            noswap = currnoswap;
        }
        return min(swap,noswap);
    }

    int minSwap(vector<int>& n1, vector<int>& n2) {
        int n = n1.size();

        n1.insert(n1.begin(), -1);
        n2.insert(n2.begin(), -1);

        bool S = 0;

        // Recursion
        //  return solveR(n1,n2,1,S);

        // R+Memo
        //  vector<vector<int>> dp(n+1,vector<int>(3,-1));
        //  return solveMemo(n1,n2,1,S,dp);

        // Tabualtion
        // return solveTab(n1, n2,n+1);
        
        //SO
        return solveSO(n1,n2,n+1);
    }
};