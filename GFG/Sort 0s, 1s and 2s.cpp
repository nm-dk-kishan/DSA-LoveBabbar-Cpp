class Solution {
  public:
    void sort012(vector<int>& arr) {
        int mid = 0, low = 0;
        int high = arr.size()-1;
        while(mid <= high){
            if(arr[mid] == 0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid] == 1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        
        
        
        //or
        
        // vector<int> ans;
        
        // //for 0s
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i] == 0){
        //         ans.push_back(arr[i]);
        //     }
        // }
        
        // //for 1s
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i] == 1){
        //         ans.push_back(arr[i]);
        //     }
        // }
        
        // //for 2s
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i] == 2){
        //         ans.push_back(arr[i]);
        //     }
        // }
        
        // arr = ans;
    }
};