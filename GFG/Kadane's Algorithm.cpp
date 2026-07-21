class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int current_sum = arr[0];
        int sum =arr[0];
        
        for(int i =1;i<arr.size();i++){
            
            current_sum = max(arr[i],current_sum+arr[i]);
            
            sum = max(current_sum,sum);
            
        }
        return sum;
    }
};