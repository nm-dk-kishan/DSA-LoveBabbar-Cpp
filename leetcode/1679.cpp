class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int count =0;
        int start =0;
        int last= nums.size()-1;

        while(start < last){
            int sum = nums[start] + nums[last];

            if(sum == k){
                count++;
                start++;
                last--;
            }
            else if(sum < k){
                start++;
            }
            else{
                last--;
            }
        }

        return count;
    }
};