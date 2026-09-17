class Solution {
public:
    //recursion
    int solveR(vector<int>& nums, int target){
        if(target < 0) return 0;
        if(target == 0) return 1;

        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans+=solveR(nums,target-nums[i]);
        }
        return ans;

    }

    //R+Memoization
    int solveMemo(vector<int>& nums, int target,vector<int>& dp){
        if(target<0) return 0;
        if(target == 0) return 1;

        if(dp[target] != -1)
            return dp[target];

        
        int ans = 0;
        for(int i =0; i<nums.size();i++){
            ans = ans + solveMemo(nums,target-nums[i],dp);
        }

        dp[target] = ans;

        return dp[target];
    }

    //tabulation  -> not possible in this questions(overflow)
    int solveTab(vector<int>& nums, int target){
        vector<uint> dp(target + 1, 0);
        dp[0]=1;

        for(int i =1;i<=target;++i){
            for(int j = 0 ; j < nums.size() ; j++){
                if(i >= nums[j]) {
                    dp[i] += dp[i- nums[j]];
                }
            }
        }

        return dp[target];
    }

    int combinationSum4(vector<int>& nums, int target) {
        //recursion
        // return solveR(nums,target);

        //R+Memoization
        // vector<int> dp(target+1,-1);
        // return solveMemo(nums,target,dp);

        //tabulation
        return solveTab(nums,target);

    }
};