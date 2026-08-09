class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        int start = 0;
        int sum =0;
        int minlen = INT_MAX;
        
        for(int end =0;end<n;end++){
            sum +=arr[end];
            
            while(sum>x){
                minlen = min(minlen , end-start+1);
                sum-=arr[start];
                start++;
            }

            
        }
        
        return (minlen == INT_MAX)? 0 : minlen;        
        
    }
};