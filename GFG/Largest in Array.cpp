class Solution {
  public:
    int largest(vector<int> &arr) {
        
        return *max_element(arr.begin(),arr.end());
        
        // code here
        // int max =0;
        // for(int i =0;i<arr.size();i++){
        //     if(max < arr[i]){
        //         max = arr[i];
        //     }
        // }
        // return max;
    }
};