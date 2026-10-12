class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int start = 0;
        int end = arr.size()-1;
        
        while(start<=end){
            int mid = start + (end - start) / 2;
            if(k == arr[mid]){
                return true;
            }
            else if(k>arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }return false;
    }
};