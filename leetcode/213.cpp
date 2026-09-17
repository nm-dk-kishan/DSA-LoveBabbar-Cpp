class Solution {
public:
    int solveTab(vector<int>& nums){
        int n = nums.size();

        if(n==1) return nums[0];

        vector<int> dp(n,0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);

        for(int i=2;i<n;i++){
            int incl = dp[i-2]+nums[i];
            int excl = dp[i-1]+0;
            dp[i]=max(incl,excl);
        }
        return dp[n-1];
    }

    int solveSO(vector<int>& nums){
        int n = nums.size();
        if(n==1) return nums[0];
        int prev2 =0,prev1=nums[0];
        for(int i =1;i<n;i++){
            int incl = prev2+nums[i];
            int excl = prev1;

            int ans = max(excl,incl);

            prev2=prev1;
            prev1=ans;        
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];

        vector<int> f,s;

        for(int i=0;i<n;i++){
            if(i!=n-1){
                f.push_back(nums[i]);
            }
            if(i!=0){
                s.push_back(nums[i]);
            }
        }

        // return max(solveTab(f),solveTab(s));
        return max(solveSO(f),solveSO(s));

    }
};