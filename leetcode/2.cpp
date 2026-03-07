class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        ans.reserve(2*n);

        for(int i =0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }

        return ans;

        //OR

        // int p = nums.size();
        // int first = 0;
        // int sec = n;

        // vector<int> ans(2*n);
        // for(int i=0;i<2*n;i += 2){
        //     ans[i] = nums[first++];
        //     ans[i+1] = nums[sec++]; 
        // }
        // return ans;
    }
};