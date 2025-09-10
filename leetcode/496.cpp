class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(), -1);

        for(int j = 0;j<nums1.size();j++){
            for(int i = 0;i<nums2.size();i++){
                if(nums1[j] == nums2[i]){

                    for(int k = i+1; k<nums2.size();k++){
                        if(nums2[k] > nums2[i]){
                            ans[j] = nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }
        }
        return ans;
    }
};