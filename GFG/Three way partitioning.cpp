class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        
        int n =arr.size();
        
        int start =0;
        int i=0;
        int end = n-1;
        
        while(i<=end){
            if(arr[i]<a){
                swap(arr[i],arr[start]);
                i++;
                start++;
            }
            else if(arr[i]>b){
                swap(arr[i],arr[end]);
                end--;
            }
            else{
                i++;
            }
        }
    }
};