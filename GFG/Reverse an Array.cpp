class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int first = 0;
        int second = arr.size()-1;
        
        while(first < second){
            swap(arr[first],arr[second]);
            first++;
            second--;
        }
        
        //or
        
        // int n = arr.size();
        // for(int i=0; i<n/2;i++){
        //     swap(arr[i],arr[n-i-1]);
        // }
        
        //or
        
        // return reverse(arr.begin(),arr.end());
    }
};