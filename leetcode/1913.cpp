class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        nums.sort();
        int size =  nums.size();

        return (nums[size] * nums[size-1]) - (nums[0]-nums[1]);
    }
};