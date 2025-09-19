class Solution {
private:
    void Solve(vector<int> nums,vector<int> Output,int index, vector<vector<int>> & ans){
        //base case
        if(index >= nums.size()){
            ans.push_back(Output);
            return;
        }

        //exclude
        Solve(nums,Output,index+1,ans);

        //include
        int element = nums[index];
        Output.push_back(element);
        Solve(nums,Output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> Output;
        int index = 0;
        Solve(nums,Output,index,ans); 
        return ans;
    }
};